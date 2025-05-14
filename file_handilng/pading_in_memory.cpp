#include<iostream>
using namespace std;
class B {
int x;
char y;
};
class Test {
    char c;   // 1 byte
    int i;    // 4 bytes
    double d;   // 1 byte
};
class d {
    public :
    void hello ( )
    {
        int c;
        char a;
    }
};

int main() {
    B b;
    cout << sizeof(B) << endl;
    cout << sizeof(Test) << endl;
    cout << sizeof(d) << endl;
    return 0;
}
