#include <iostream>
using namespace std;
class faculty ;

class student
{
    int studentid, mathmark, cmark;
    float per;
    char studentname[25];
public:
    void add_student_personal_data()
    {
        cin >> studentid >> studentname;
    }
    

    friend void faculty :: add_math_marks(student &x);
};

class faculty
{
    int facultyid;
    char facultyname[25];
public:
    void add_faculty_personal_data()
    {
        cin >> facultyid >> facultyname;
    }

    void add_math_marks(student &x );

};

void faculty :: add_math_marks(student &x)
    {
        cin >> x.mathmark;
    }

int main()
{
    student s[5];
    faculty f1 , f2;
    int i;

    for (i=0;i<5;i++)
    {
        s[i].add_student_personal_data();
    }

    f1.add_faculty_personal_data();
    f2.add_faculty_personal_data();

    for(int i=0;i<5;i++)
    {
        f1.add_math_marks(s[i]);
    }
    
    return 0;
}
