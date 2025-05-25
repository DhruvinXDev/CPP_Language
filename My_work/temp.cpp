#include <iostream>
using namespace std;
template <typename t>
void hello(t x)
{
    cout << "hello !! , I am " << x << endl;
}

int main()
{
    hello(1);
    hello(1.3);
    hello("dhruvin");

    auto dhruvin = [](auto t)
    { cout << "this is lamda function dhruvin ."; };
    return 0;
}