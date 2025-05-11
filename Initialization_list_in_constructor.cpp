#include<iostream>
using namespace std;
class value {
    int x,y;
    public :
    value (int a,int b) : x(a) , y(b) {
        cout << "Constructor called "<<endl;
    }
};
int main()
{
    value v(5,10);
    return 0;
}