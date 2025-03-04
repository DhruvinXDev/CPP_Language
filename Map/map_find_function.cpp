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
    int searchrollno;
    cout <<"Enter the roll number that you want to find : ";
    cin >> searchrollno;

    auto it = std.find(searchrollno);//hear the find function are used to find such value in this map 
    // if the value will founded then it will return that index to the "it" variable
    // if the value will not founded then it will return the end( map_variable.end( ) ) value to the "it" variable 

    if(it != std.end( ))
    {
        cout << "Student found !  "<<endl<<"Student roll number : "<<it -> first <<endl<<"Student name : "<<it ->second.name<<endl <<"Student age : "<< it->second.age<<endl;
    }
    else
    cout<<"Student are not found "<<endl;
}
