#include <iostream>
using namespace std ;
class Bank
{
public :
    float money;
    string name;
    void getmoney( )
    {
        cout << "Enter the name of the user :";
        cin >>name;
        cout<< "Enter the money balance : ";
        cin >> money;
    }
    void showmoney( )
    {
        cout << "Name :"<<name<<endl;
        cout << "You have :" <<money <<" INR."<<endl;
    }
};
int main( )
{
    int i,n,c;
    Bank b[20];
    cout << "How many account you want to create :";
    cin >> n;

        for(i=0;i<n;i++)
    {
        b[i].getmoney();

    }
         for(i=0;i<n;i++)
    {
        b[i].showmoney();

    }
    return 0;
}

