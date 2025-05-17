#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = {"dhruvin"};
    string Name = "dhruvin";

    // string input way's

    string input;
    // 1
    cin >> input;
    cout << "input : "<<input<<endl;
    // 2
    cin.ignore(); // for clear the buffer 
    getline(cin, input);
    cout << "input : "<<input<<endl;
    // 3
    // form stringstream
    return 0;
}