#include <iostream>
#include<sstream>
using namespace std;
   
int main() {
   string name = {"hello my name is dhruvin and my surname is vaghasiya and i am study in charusat collage"};

   stringstream obj(name);
   string temp;
   while ( obj >> temp)
   {
    cout << temp << endl ;
   }

  return 0;
}