#include <iostream>
using namespace std;

void area_cuboid(int L,int W=1,int D=1)
{
    cout << endl << "area of cuboid : " << L*W*D << endl;
}

int main()
{
    int l=10,w=20,d=30;

    cout << endl << "----- pass length , width , depth -----" << endl;
    area_cuboid(l,w,d);

    cout << endl << "----- pass length , width ----- depth set to default value -----" << endl;
    area_cuboid(l,w);

    cout << endl << "----- ass length ----- width , depth set to default value -----" << endl;
    area_cuboid(l);

    return 0;
}
