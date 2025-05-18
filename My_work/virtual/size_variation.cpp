#include <iostream>
using namespace std;
/*
The size of the A class : 1
The size of the B class : 4
The size of the C class : 1
The size of the D class : 4
*/
class A {};

class B {
    int a;
};

class C {
    void foo();
};

class D {
    virtual void foo();
};
class E {
    virtual void foo();
};
   
int main() {
   cout<<"The size of the A class : "<<sizeof(A)<<endl;
   cout<<"The size of the B class : "<<sizeof(B)<<endl;
   cout<<"The size of the C class : "<<sizeof(C)<<endl;
   cout<<"The size of the D class : "<<sizeof(D)<<endl;
   cout<<"The size of the E class : "<<sizeof(E)<<endl;
   
  return 0;
}