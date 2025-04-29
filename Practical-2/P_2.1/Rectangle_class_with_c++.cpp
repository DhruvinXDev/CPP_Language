#include<iostream>
using namespace std;

class Rectangle {
    float l,w,area,per;

public :
    void setDimensions(float x,float y)
    {
        l=x;
        w=y;
    }
    void are( )
    {
        area = l*w;
    }
    void perimeter()
    {
        per = ( 2*l + 2*w) ;
    }
    void display( )
    {
        cout <<"The area = "<<area<<endl;
        cout <<"The perimeter ="<<per<<endl;
    }
};


int  main( )
{
   int n;
   float l,w;
   cout << "Enter the number of rectangle : ";
   cin >> n;
   Rectangle r[n];
   for(int i=0;i<n;i++)
   {
       cout << "------------------------------------------" <<endl;
       cout <<i+1<<") Enter the length of the rectangle : ";
       cin >> l;
       cout <<i+1<<") Enter the width of the rectangle : ";
       cin >> w;
       r[i].setDimensions(l,w);
       r[i].are();
       r[i].perimeter();
   }
   
   for(int i=0;i<n;i++)
   {
       cout << "------------------------------------------" <<endl;
       cout << "        ---"<<i+1<<") Rectangle data ---" << endl;
       cout << "------------------------------------------" <<endl;

       r[i].display( );

   }
   cout << "------------------------------------------" <<endl;

   cout << "My Name is Dhruvin Vaghasiya."<<endl<<"My ID is 24CE137."<<endl;

    return 0;
}
