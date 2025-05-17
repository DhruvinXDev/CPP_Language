#include <iostream>
using namespace std;

int x = 120; // global variable

void function()
{
    int x = 10;
    {
        int x = 20;
        cout << "In block x : " << x << endl;
        cout << "In block ::x : " << ::x << endl;
    }
    cout << "outside block x : " << x << endl;
    cout << "outside block ::x : " << ::x << endl;
}
int main()
{
    function();
    return 0;
}