#include <iostream>
#include <string>
using namespace std;

class student;

class faculty {
    int facultyid;
    string facultyname;
public:
    void add_faculty_personal_data() {
        cout << "Enter faculty ID and name: ";
        cin >> facultyid;
        cin.ignore(); // to ignore leftover newline
        getline(cin, facultyname);
    }

    void add_math_marks(student& x);
};

class student {
    int studentid, mathmark, cmark;
    float per;
    string studentname;
public:
    void add_student_personal_data() {
        cout << "Enter student ID and name: ";
        cin >> studentid;
        cin.ignore(); // to ignore leftover newline
        getline(cin, studentname);
    }

    friend void faculty::add_math_marks(student& x);

    void display_student_data() {
        cout << "ID: " << studentid << ", Name: " << studentname
             << ", Math Marks: " << mathmark << endl;
    }
};

void faculty::add_math_marks(student& x) {
    cout << "Enter math marks for student ID " << x.studentid << ": ";
    cin >> x.mathmark;
}

int main() {
    student s[5];
    faculty f1, f2;

    for (int i = 0; i < 5; i++) {
        s[i].add_student_personal_data();
    }

    f1.add_faculty_personal_data();
    f2.add_faculty_personal_data();

    for (int i = 0; i < 5; i++) {
        f1.add_math_marks(s[i]);
    }

    cout << "\nStudent Data:\n";
    for (int i = 0; i < 5; i++) {
        s[i].display_student_data();
    }

    return 0;
}
