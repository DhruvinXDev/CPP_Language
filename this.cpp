#include<iostream>
using namespace std;
class xyz
{
    int a,b;
    public:
    void set()
    {
        //cin>>a>>b;
        cin>>this->a>>this->b;//this is a pointer it is by deafault call when calling object is call
    }
    void show()
    {
        //cout<<"a="<<a<<" b="<<b<<endl;
        cout<<"a="<<this->a<<" b="<<this->b<<endl;
    }
};
int main()
{
    xyz obj;
    obj.set();
    obj.show();
    return 0;
}
