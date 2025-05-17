#include <iostream>
using namespace std;
class base
{
public:
    static int x;
    base()
    {
        x++;
        cout << "base Object count is : " << x << endl;
    }
    static void display()
    {
        cout << "the value of the x is : " << x << endl;
    }
    ~base()
    {
        x--;
        cout << "delete object of the base : " << x << endl;
    }
};
int base::x;

class derived : public base
{
    static int y;
    public:
    derived()
    {
        y++;
        cout << "derived Object count is : " << y << endl;
    }
    ~derived()
    {
        y--;
        cout << "delete derived Object count is : " << y << endl;
    }
};
int derived :: y;

int main()
{
    base b;
    derived d;
    cout << "size of the base class : " << sizeof(b) << endl;
    cout << "size of the drived class : " << sizeof(d) << endl;
    /* Output :
        size of the base class : 1
        size of the drived class : 1
    */

    base *bp = new base();
    derived *dp = new derived();
    delete dp;
    return 0;
}
