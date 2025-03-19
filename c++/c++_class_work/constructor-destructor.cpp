#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int id;
    char name[25];
    int m1,m2,m3;
    float per;
    void calculate()
    {
        per = (m1+m2+m3)/3;
    }

public:

    student()
    {
        cout << endl << "----- default constructor is called -----" << endl;
        id = 0;
        strcpy(name, "");
        m1 = 0;
        m2 = 0;
        m3 = 0;
        per = 0;
    }

    student(int I, char N[], int M1, int M2, int M3)
    {
        cout << endl << "----- parameterized constructor is called -----" << endl;
        id = I;
        strcpy(name,N);
        m1 = M1;
        m2 = M2;
        m3 = M3;
        // per = (m1+m2+m3)/3;
        calculate();
    }
   
     student(const student &o) // const can not be change value of object
    {
        cout << endl << "----- copy constructor is called -----" << endl;
        id = o.id;
        strcpy(name,o.name);
        o.m1=o.m1+10;
        m1 = o.m1;
        m2 = o.m2;
        m3 = o.m3;
        per = o.per;
    }

    ~student()
    {
        cout << endl << "----- destructor is called, one object is removed from memory -----" << endl;
    }

    void displaydata()
    {
        cout << endl << id << " : " << name << " : " << m1 << " : " << m2 << " : " << m3 << " : " << per << endl;
    }
};

int main()
{
     {
        student s1;
        s1.displaydata();

     }

    student s2(80,"pallavi",45,78,26);
    // s2.calculate();
    s2.displaydata();

    student s3=s2; // copy constructor is called
    s3.displaydata();

    return 0;
}
