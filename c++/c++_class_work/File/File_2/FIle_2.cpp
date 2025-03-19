#include<iostream>
#include<fstream>
using namespace std;

class student 
{
    string id;
    string name;
    string cgpa;
    public :
    void add_data( )
    {
        ifstream fr;
        fr.open("input.txt");
        getline(fr,id,',');
        getline(fr,name,',');
        getline(fr,cgpa,',');
        fr.close( );
    }
    void put_data( )
    {
        ofstream fw;
        fw.open("output.txt");
        fw << "The id is : "<<id<<endl;
        fw<<"The name is : "<<name<<endl;
        fw<<"The cgpa is : "<<cgpa<<endl;
        fw.close( );
    }
};

int main()
{
    student s1,s2,s3;
    s1.add_data( );
    s2.add_data( );
    s3.add_data( );

    s1.put_data( );
    s2.put_data( );
    s3.put_data( );

}