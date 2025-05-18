#include <iostream>
using namespace std;

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
   
int main() {
   cout<<"The size of the A class : "<<sizeof(A)<<endl;
   cout<<"The size of the B class : "<<sizeof(B)<<endl;
   cout<<"The size of the C class : "<<sizeof(C)<<endl;
   cout<<"The size of the D class : "<<sizeof(D)<<endl;
  return 0;
}