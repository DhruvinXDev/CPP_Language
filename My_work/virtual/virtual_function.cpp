#include <iostream>
using namespace std;
class base
{
public:
    virtual void hello()
    {
        cout << "Hello Dhruvin Welcome to base class !!" << endl;
    }
};

class drived : public base
{
    public :
    void hello() override
    {
        cout << "Hello Dhruvin Welcome to Derived class !!" << endl;
    }
};
int main()
{
    base b;
    drived d;
    cout << "Normal way :"<<endl ;
    b.hello();
    d.hello();
    cout << "In pointer : "<<endl;
    base *bp = new drived;
    bp->hello();
    
    return 0;
}