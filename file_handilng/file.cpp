#include <iostream>
#include<fstream>
using namespace std;
   
int main() {
    string name;
   ofstream write("dhruvin.txt");
   // write << "dhruvin vaghasiya ";
      cout <<"Enter your name : ";
    //   cin >> name ;
    getline(cin , name );
      write << name;
    write.close();
    
    ifstream read("dhruvin.txt");
//    cin >> name;
    getline(read , name);
   cout << name;
   read.close(); 
    

  return 0;
}