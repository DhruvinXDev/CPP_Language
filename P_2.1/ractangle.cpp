#include<iostream>
using namespace std;

class ractangle {
    int length;
    int width;
    int area,parameter;
    public :
    ractangle( ) : length(0) , width(0) { }
    void GetDetails(int l,int w)
    {
        length = l;
        width = w;
        area = l*w;
        parameter = 2* (l + w);
    }
    void display( ) const
    {
        cout<<"Length of tarangle is : "<<length<<endl;
        cout<<"Width of tarangle is : "<<width<<endl;
        cout<<"Area of tarangle is : "<<area<<endl;
        cout<<"Prameter of tarangle is : "<<parameter<<endl;
    }

};

int main ( )
{
    int n;
    cout<<"how many ractangle you want to add : ";
    cin >>n;
    ractangle r[n];
    for(int i=0;i<n;i++)
    {
        int l,w;
        cout<<"------------> "<<i+1<<" Tarangle Dtails "<<endl;
        cout<<i+1<<") Enter Length of Tarangle : ";
        cin >> l;
        cout <<i+1<<") Enter Wigth of Tarangle : ";
        cin >>w;
        r[i].GetDetails(l,w);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"------------> "<<i+1<<" Tarangle Dtails "<<endl;
        r[i].display();
    }
    return 0;

}