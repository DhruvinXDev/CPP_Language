#include <iostream>
using namespace std;

// Base class WITHOUT virtual function
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

// B and C still inherit from A
class B : virtual  public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

// D inherits from both B and C
class D : public B, public C {
public:
    void show() {
        cout << "Class D" << endl;
    }
};

int main() {
    A* aPtr;    // Base class pointer
    D obj;      // Object of derived class D

    aPtr = &obj;  // Assigning derived object to base class pointer

    aPtr->show(); // Calls A::show() because it's not virtual
    // obj.show();
    return 0;
}
