#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main ( )
{
    //method 1
    map<int,string> student;// this is the defination of the map 
    student[12]="Raj";
    student[34]="riya";
    student[47]="priya";
    student[36]="dhruvin";// map will automatically give assending order of the output
    /* 12 = Raj
    34 = riya
    36 = dhruvin
    47 = priya
    hear ths 12 34 this is a key and the right side is called as value */
    for(auto &i : student)
    {
        cout << i.first <<" = "<<i.second<<endl;// hear i.first mean the first value of that index and same as i.second
    }


    //method 2
    map<int,string> name = {{101,"dhruvin"},{102,"bob"},{50,"darshan"}}; // this also way to declare the map
    
    map<int,string> :: iterator i;// declare an iterator
    // iterate thoruogh map
    for(i = name.begin( ); i!=name.end( );i++)
    {
        cout <<"roll no :"<< i->first << " , name :" <<i->second <<endl;
    }

    //method 3
    int rollno;
    string s_name;
    int number;
    map<int, string> student_name;
    cout <<left <<setw(40)<<"Enter the number of the student "<<setw(2)<<":";
    cin >> number;
    for(int i=0;i<number;i++)
    {
        cout <<left <<setw(40)<<"Enter the name of the student "<<left<<setw(2)<<":";
        cin>> s_name;
        cout <<left <<setw(40)<<"Enter the roll number of the student  "<<left<<setw(2)<<":";
        cin  >> rollno;
        student_name[rollno] = s_name;
    }

    for(const auto &i : student_name )
    {
        cout <<left <<setw(5)<< i.first <<setw(2)<< "= "<< i.second <<endl ;
    }

}
