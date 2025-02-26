#include<iostream>
#include<stack>
using namespace std;



int main( )
{
    int data[ ] = {32,71,12, 45,26};
    stack<int> s;

    for(int i=0;i<5;i++)
    {
        s.push(data[i]);
    }
    cout << "reverse string is ";
    while(!s.empty())
    {
        cout << s.top( ) <<" ";
        s.pop();
    }
}
