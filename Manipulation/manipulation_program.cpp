#include<iostream>
#include<iomanip>
using namespace std;
int main () 
{
    string ID,name,g1,g2;
    float m_t1,m_p1,m_t2,m_p2,cgpa=0,sgpa=0,m1,m2;
    cout<<left<<setw(69)<<"Enter the name of the student "<<left<<setw(2)<<":";
    cin>>name;
    cout<<left<<setw(69)<<"Enter the ID of the student  "<<left<<setw(2)<<":";
    cin >> ID;
    cout <<left<<setw(69)<< "Enter the theory mark(out of 75) of computer programming subject "<<left<<setw(2)<<":";
    cin >> m_t1;
    cout <<left<<setw(69)<<"Enter the parctical mark(out of 25) of computer programming subject "<<left<<setw(2)<<":";
    cin >> m_p1;
    cout <<left<<setw(69)<<"Enter the theory mark(out od 75) of the math subject "<<left<<setw(2)<<":";
    cin  >> m_t2;
    cout <<left<<setw(69)<<"Enter the parctical mark(out of 25) of the math subject "<<left<<setw(2)<<":";
    cin >> m_p2;
    system("CLS");
    cout << "-----------------------------------------------------"<<endl;
    m1 = m_p1 + m_t1;
    m2 = m_p2 + m_t2;
    //theory marks of the subject 1
    if(m1 >= 95)
    {
        g1="O+";
        sgpa += 10;
    }
    else if (m1 >= 90)
    {
        g1="O ";
        sgpa += 9;
    }
    else if (m1 >= 85)
    {
        g1="A+";
        sgpa += 8;
    }
    else if(m1 >= 80)
    {
        g1="A ";
        sgpa += 6;
    }
    else if (m1 >= 75)
    {
        g1="B+";
        sgpa += 5;
    }
    else 
    {
        g1 ="B ";
        sgpa += 4;
    }
    // practical mark of the subject 1
    if(m2 >= 95)
    {
        g2="O+";
        sgpa += 10;
    }
    else if (m2 >= 90)
    {
        g2="O ";
        sgpa += 9;
    }
    else if (m2 >= 85)
    {
        g2="A+";
        sgpa += 8;
    }
    else if(m2 >= 80)
    {
        g2="A ";
        sgpa += 6;
    }
    else if (m2 >= 75)
    {
        g2="B+";
        sgpa += 5;
    }
    else 
    {
        g2 ="B ";
        sgpa += 4;
    }
    sgpa /=2;
    cgpa = sgpa;

    cout<<left<<setw(14)<<"Student ID"<<left<<setw(2)<<":"<<left<<setw(15)<<ID<<endl;
    cout<<left<<setw(14)<<"Student Name"<<left<<setw(2)<<":"<<left<<setw(15)<<name<<endl;
    cout <<endl;
    cout<<right<<setw(40)<<"Over all grade"<<endl;
    cout<<left<<setw(25)<<"Computer Programing"<<right<<setw(8)<<g1<<endl;
    cout<<left<<setw(25)<<"Math"<<right<<setw(8)<<g2<<endl;
    cout<<left<<setw(6)<<"SPGA"<<left<<setw(2)<<":"<<left<<setw(3)<<fixed<<setprecision(2)<<sgpa<<endl;
    cout<<left<<setw(6)<<"CPGA"<<left<<setw(2)<<":"<<left<<setw(3)<<fixed<<setprecision(2)<<cgpa<<endl;
    cout << "-----------------------------------------------------"<<endl;
    cout <<"My name is dhruvin \nMy id is 24ce137"<<endl;



}
