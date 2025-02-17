#include <iostream>
using namespace std;

// int maxvalue(int n1, int n2)
// {
//     return (n1>n2)?n1:n2;
// }

template <typename data> data maxvalue(data n1, data n2)
{
    return (n1>n2)?n1:n2;
}

int main()
{

    // cout << maxvalue(30,50) << endl;
    // cout << maxvalue(35.6,35.8) << endl;// implicit tupe conversion are there
    // cout << maxvalue('A','H'); // implicit type conversion are there
    
    cout << maxvalue<int>(30,50) << endl;
    cout << maxvalue<float>(35.6,35.8) << endl;
    cout << maxvalue<char>('A','H');
    
    return 0;
}
