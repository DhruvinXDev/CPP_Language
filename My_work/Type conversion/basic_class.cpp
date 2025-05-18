#include <iostream>
using namespace std;
/* Output 
Value of a -2
Value of b 6422280
Value of a 9
Value of b 0
Value of a 10
Value of b 0
*/
class A
{
    int a, b;

public:
    A()
    {
    }
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    A(int x)
    {
        a = x;
        b = 0;
    }
    void display() const
    {
        cout << "Value of a " << a << endl;
        cout << "Value of b " << b << endl;
    }
};

int main()
{
    A a;
    a.display();
    a = 9;
    a.display();
    a = 10;
    a.display();
    return 0;
}