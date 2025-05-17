#include <iostream>
using namespace std;
/* Output are :
    size of the base class : 1
    size of the drived class : 1
*/
class base
{
public:
};

class drived : public base
{
public:
};
int main()
{
    base b;
    drived d;
    cout << "size of the base class : " << sizeof(b) << endl;
    cout << "size of the drived class : " << sizeof(d) << endl;
    return 0;
}
