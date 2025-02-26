#include <iostream>
using namespace std;

void swapvalue_by_value(int,int);
void swapvalue_by_address(int*,int*);
void swapvalue_by_reference(int&,int&);

int main()
{
    int a,b;

    a=10;
    b=20;
    cout << endl << "------- call by value -------" << endl;
    cout << endl << "before call : a=" << a <<" b=" << b;
    swapvalue_by_value(a,b);
    cout << endl << "after call : a=" << a <<" b=" << b << endl;

    a=10;
    b=20;
    cout << endl << "------- call by address -------" << endl;
    cout << endl << "before call : a=" << a <<" b=" << b;
    swapvalue_by_address(&a,&b);
    cout << endl << "after call : a=" << a <<" b=" << b << endl;

    a=10;
    b=20;
    cout << endl << "------- call by reference -------" << endl;
    cout << endl << "before call : a=" << a <<" b=" << b;
    swapvalue_by_reference(a,b);
    cout << endl << "after call : a=" << a <<" b=" << b << endl;

    return 0;
}

void swapvalue_by_value(int x,int y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

void swapvalue_by_address(int *x,int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

void swapvalue_by_reference(int &x,int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}
