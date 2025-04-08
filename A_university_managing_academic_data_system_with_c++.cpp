#include<iostream>
#include<string>
using namespace std;
class  Student
{
    string name;
    float marks1,marks2,marks3,average;
public :
    string roll_num ;
    Student ( ) : roll_num("0"),marks1(0),marks2(0),marks3(0),average(0),name("Unknown Student ") { }
    void enter_data( )
    {
        cout <<"Enter roll number of student : ";
        cin >> roll_num;
        cout <<"Enter name of student : ";
        cin >> name;
        cout << "1) Enter the 1st subject marks : ";
        cin >> marks1;
        cout << "2) Enter the 2nd subject marks : ";
        cin >> marks2;
        cout << "3) Enter the 3rd subject marks : ";
        cin >> marks3;
        average = ( marks1 + marks2 + marks3)/3;
        cout <<"You'r successfully added three subject marks ."<<endl;
    }
    void display_details( )
    {
        // cout <<"--------------------------------------------------------"<<endl;
        cout <<"Name is : "<<name<<endl;
        cout <<"Roll number is : "<<roll_num<<endl;
        cout <<"Your marks of three subject , "<<endl;
        cout <<"    1st subject marks is : "<<marks1<<endl;
        cout <<"    2nd subject marks is : "<<marks2<<endl;;
        cout <<"    3rd subject marks is : "<<marks3<<endl;
        cout <<"Your average marks is : "<<average<<endl;
    }
};

int main()
{
    int n,p=0,c=0;
    string roll,name;
    cout << "How many student data you want to add : ";
    cin >>n;
    class Student s[n];
    cout << "Who are you ?(student/administaration) : ";
    cin >>name;
    if(name=="administaration")
    {
        cout <<"--------------------------------------------------------"<<endl;
        cout <<"       ------ Welcome to Administration block ------    "<<endl;
        for(int i=0; i<n;i++)
        {
            cout <<"--------------------------------------------------------"<<endl;
            cout <<"           ------ Enter "<<i+1 <<" student data ------    "<<endl;
            cout <<"--------------------------------------------------------"<<endl;
            s[i].enter_data();
        }
    }
        cout <<"--------------------------------------------------------"<<endl;
        cout <<"       ------ Welcome to Student block ------    "<<endl;
    x:
    cout <<"--------------------------------------------------------"<<endl;
    cout <<"Enter roll number of student : ";
    cin >>roll;
    for(int i=0;i<n;i++)
    {
        if(s[i].roll_num==roll)
        {p=0;
            cout <<"--------------------------------------------------------"<<endl;
            s[i].display_details( );
            p++;
            break;
        }
    }
    if(p==0)
    {
        cout<<"Sorry !! , No data found ."<<endl;
    }
    cout <<"--------------------------------------------------------"<<endl;
    cout <<"You want to check more infromation ? (Enter 1/0) :";
    cin >>c;
    if(c==1)
    goto x;
    else
    cout << "Thank you for visiting ."<<endl;
    cout <<"--------------------------------------------------------"<<endl;

    cout <<"My name is Dhruvin Vaghasiya."<<endl<<"My id is 24CE137."<<endl<<"Date is : 11/02/2025"<<endl;
return 0;
}
