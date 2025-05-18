#include <iostream>
using namespace std;

class A 
{
    public : 
    A()
    {
        cout << "Class A constructer are called."<<endl;
    }
    ~A()
    {
        cout << "Class A destructer are called."<<endl;
    }

};

class B
{
    A a;
    public :
    B()
    {
        cout<< "Class B constructer are called"<<endl;
    }
    ~B()
    {
        cout<< "Class B destructer are called"<<endl;
    }
};
   
int main() {
   B b;
  return 0;
}