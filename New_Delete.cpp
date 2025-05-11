#include<iostream>
using namespace std;

int main()
{
    int a =4;
    int *ptr = &a; 
    cout << "The value of the a is : "<<*ptr<<endl;
    // new keyword
    float *f = new float(10.89);
    cout << "The value of the f is : "<<*f  << endl;
    delete f; // delete the f pointer 
    // new array keyword 
    int *p = new int[40];
    *p = 0;
    *(p +1) = 1;
    cout<<"The value of the p is : "<<*p<<endl;
    cout<<"The value of the p +1 is : "<<*(p +1)<<endl;
    cout << "The value of the p[0] is : " <<p[0]<<endl;
    cout<<"The value of the p[1] is : " << p[1]<<endl;
    //delete the pointer 
    delete p;
     
    return 0;
}