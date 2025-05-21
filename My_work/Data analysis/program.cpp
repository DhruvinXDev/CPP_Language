#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

class Student
{
public:
    string rollNo;
    float assignmentMarks = -1;
    float quizMarks = -1;
    float videoMarks = -1;

    Student() = default;
    Student(const string &roll) : rollNo(roll) {}
    float totalMarks() const
    {
        float total = 0;
        if (assignmentMarks >= 0)
            total += assignmentMarks;
        if (quizMarks >= 0)
            total += quizMarks;
        if (videoMarks >= 0)
            total += videoMarks;
        return total;
    }

    void display() const
    {
        cout << "Roll No: " << rollNo << "\n"
             << "  Assignment Marks: " << (assignmentMarks >= 0 ? to_string(assignmentMarks) : "N/A") << "\n"
             << "  Quiz Marks: " << (quizMarks >= 0 ? to_string(quizMarks) : "N/A") << "\n"
             << "  Video Presentation Marks: " << (videoMarks >= 0 ? to_string(videoMarks) : "N/A") << "\n";
    }
};

int main()
{
    ifstream infile("data.txt");
    if (!infile)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    map<string, Student> studentMap;
    int studentNo;
    string rollNo;
    float marks;

    // Read Assignment marks (first 141 lines)
    for (int i = 0; i < 141; ++i)
    {
        infile >> studentNo >> rollNo >> marks;
        if (rollNo == "24ce063")
            continue; // skip missing student

        if (studentMap.find(rollNo) == studentMap.end())
        {
            studentMap[rollNo] = Student(rollNo);
        }
        studentMap[rollNo].assignmentMarks = marks;
    }

    // Read Quiz marks (next 141 lines)
    for (int i = 0; i < 141; ++i)
    {
        infile >> studentNo >> rollNo >> marks;
        if (rollNo == "24ce063")
            continue;

        if (studentMap.find(rollNo) == studentMap.end())
        {
            studentMap[rollNo] = Student(rollNo);
        }
        studentMap[rollNo].quizMarks = marks;
    }

    // Read Video Presentation marks (last 141 lines)
    for (int i = 0; i < 141; ++i)
    {
        infile >> studentNo >> rollNo >> marks;
        if (rollNo == "24ce063")
            continue;

        if (studentMap.find(rollNo) == studentMap.end())
        {
            studentMap[rollNo] = Student(rollNo);
        }
        studentMap[rollNo].videoMarks = marks;
    }

    infile.close();
    int choice = 0;
    string queryRoll;
    multimap<float, string, greater<float>> total_marks_map;
    cout << "Enter 1 for search student data" << endl
         << "Enter 2 for top N number of student" << endl
         << "Enter Choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        // Enclose this block
        cout << "Enter roll number to search: ";
        cin >> queryRoll;

        auto it = studentMap.find(queryRoll);
        if (it != studentMap.end())
        {
            it->second.display();
        }
        else
        {
            cout << "Student " << queryRoll << " not found.\n";
        }
        break;
    }

    case 2:
    {
        float temptotal;
        multimap<float, string, greater<float>> total_marks_map;

        for (auto s : studentMap)
        {
            temptotal = s.second.totalMarks();
            total_marks_map.insert({temptotal, s.second.rollNo});
        }

        int number;
        cout << "Enter the number you want to see top: ";
        cin >> number;

        int count = 0;
        for (const auto &entry : total_marks_map)
        {
            cout << "Rank : " << count + 1 << " Student ID: " << entry.second
                 << " | Total Marks: " << entry.first << endl;

            if (++count == number)
                break;
        }
        break;
    }

    default:
        break;
    }

    return 0;
}
