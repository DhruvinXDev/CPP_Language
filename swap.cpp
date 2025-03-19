#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b = 2;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<a<<" "<<b<<endl;
    a = a + b - (b=a);
    cout<<a<<" "<<b<<endl;
    if(a & 1) cout<<"Number is Odd"<<endl;
    else cout<<"Number Is Even";
    return 0;
}