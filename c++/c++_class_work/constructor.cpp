#include<iostream>
using namespace std;
class student 
{
    int id;
    string name;
    int m1,m2,m3;
    float per;
    static int count;

    public : 
    //initializing the default constructor
    student ( )
    {
        //asinged the value to variables
        cout <<"Hiii ";
    }
    student (int i,string n,int marks1,int marks2,int marks3)
    {
        id=i;
        name=n;
        m1=marks1;
        m2=marks2;
        m3=marks3;
        calper();
    }
    void set(int i,string n,int m1,int m2,int m3)
    {
        id=i;
        name=n;
        m1=m1;
        m2=m2;
        m3=m3;
        calper();
    }
    void calper( )
    {
        per=(m1+m2+m3)/3;
    }
    void get( )
    {
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks 1 : "<<m1<<endl;
        cout<<"Marks 2 : "<<m2<<endl;
        cout<<"Marks 3 : "<<m3<<endl;
        cout<<"Percentage : "<<per<<endl;
    }
};
//initializing the static variable count
int student :: count=0;

int main( )
{
    student s;
    s.get();
    // student g(137,"Rahul",90,80,70);
    // g.get();
    student g =s;
    g.get();
    return 0;
}
