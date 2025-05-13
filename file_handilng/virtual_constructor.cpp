#include <iostream>
using namespace std;

class base {
    public :
      base ( )
    {
        cout << "constructor of the base class ."<<endl;
    }
     virtual void  greting ()
    {
        cout << "this is the greting function of the base class ."<<endl;
    }
    virtual ~base()
    {
        cout <<"distructor of the base class ."<<endl;
    }
};

class drived : public base {
    public :
    drived ( )
    {
        cout << "constructor of the drived class ."<<endl;
    }
    void greting ( ) override
    {
        cout << "this is the greting function of the drived class ."<<endl;
    }
    ~drived()
    {
        cout <<"distructor of the drived class ."<<endl;
    }
};

int main() {
    {
        base  *b = new drived;
     
        b->greting();
        delete b;
    }

  return 0;
}