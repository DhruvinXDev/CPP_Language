#include <iostream>
using namespace std;

class ClassA {
    int value1,value2;
public :
    void input() {
        cout << "Enter value for ClassA: ";
        cin >> value1>>value2;
    }

    void display() const {
        value1 += 10;
        cout << "Value in ClassA: " << value1 << value2<<endl;
    }
};

int main() {
    ClassA objA;

    objA.input();
    objA.display();

    return 0;
}