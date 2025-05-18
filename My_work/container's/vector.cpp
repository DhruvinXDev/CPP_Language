#include <iostream>
#include <vector>
using namespace std;

// void print(vector<int> &vect) const // give error because this is not valid syntex in normal fun it valid in class
// {
//     for(auto i : vect)
//     {
//         cout<< i << " ";
//     }
// }

void print(const vector<int> &vect)
{
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v(2);
    print(v);
    vector<int> v1(5, 10);
    print(v1);
    v1.push_back(1);
    print(v1);
    // v1.push_front(1); //give error because this in not valid in vector
    v1.pop_back();
    print(v1);
    v1.pop_back();
    print(v1);

    return 0;
}