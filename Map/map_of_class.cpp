#include<iostream>
#include<map>
using namespace std;

class student {
    public :
    string name;
    int age;
    student ( int age , string name) : age(age) , name(name){ };
};
int main ( )
{
    map<int,student> std;// declare  the class with the map 

    std.insert({101,student(18,"dhruvin")});//this is the insert function to insert the data in the map 
    std.insert({102,student(18,"darshan")});// map_variable.insert({ key , value} );
    std.insert({103,student(18,"shreeja")});

    for(const auto &i : std)
    {
        cout << "id : "<<i.first <<" name : "<<i.second.name<<" age : "<<i.second.age<<endl;
    }


}
