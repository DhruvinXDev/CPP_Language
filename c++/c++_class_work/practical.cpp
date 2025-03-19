#include <iostream>
using namespace std;
class student ;
class faculty
{
    int facultyid;
    char facultyname[25];
public:
    void add_faculty_personal_data()
    {
        cin >> facultyid >> facultyname;
    }
    // defind friend function
    void add_cmarks(student &y );
    void add_math_marks(student &x );
    

};
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
    void cal_per( )
    {
        per= (mathmark+cmark) / 2;
    }
    void display_result( )
    {
        
        cout <<mathmark <<endl<<cmark<<endl<<per<<endl;
    }
    // decularation off the friend function
    friend void faculty :: add_cmarks(student &y);
    friend void faculty :: add_math_marks(student &x);
};


// write the friend  function 
void faculty :: add_cmarks(student &y)
{
    cin >> y.cmark;
}

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
    for (int i=0;i<5;i++)
    {
        f2.add_math_marks(s[i]);
    }
    for (int i=0;i<5;i++)
    {
        s[i].cal_per( );
        s[i].display_result( );
    }
    
    return 0;
}
