#include<iostream>
using namespace std;
class  bank
{
public :
    string name;
    double anum;
    float balance;

    void deposit( )
    {
        float bl;
        cout << "Enter the amount you want to add :";
        cin >> bl;
        balance+=bl;
        cout <<"You'r successfully add amount in your account."<<endl;
        cout << "Your current balance is : "<<balance <<endl;
    }
    void withdraw(float x )
    {
        balance -= x;
        if(balance <0)
        {
            cout << "You have not enough amount for withdraw ."<<endl;
        }
        else
        cout << "You'r successfully withdraw your amount ." << endl<<"Current balance is : "<<balance<<endl ;

    }
    void abalance ()
    {
        cout << "Your current balance is : "<<balance <<endl;
    }
};

int main()
{
    int n,p=0;

    double num,a;
    short int c;
    cout << "How many account you want to create : ";
    cin >>n;
    class bank b[n];
    for(int i=0; i<n;i++)
    {
        cout <<"--------------------------------------------------------"<<endl;
        cout <<i+1<<") Enter bank account holder name : ";
        cin >>b[i].name;
        cout <<i+1<<") Enter bank account number : ";
        cin >>b[i].anum;
        cout <<i+1<<") Enter bank account Balance : ";
        cin >>b[i].balance;


    }
    x:
        cout <<"--------------------------------------------------------"<<endl;
        cout <<"Enter choice "<<endl<<"1) deposit "<<endl<<"2) withdraw"<<endl<<"3) check the balance"<<endl<<"4) exit "<<endl<< endl;
        cout <<"Enter choice: ";
        cin >>c;

        cout <<"--------------------------------------------------------"<<endl;
    switch(c)
    {
    case 1:
        cout<<"Enter bank account number :";
        cin >>num;
        for(int i=0;i<n;i++)
        {
            if(b[i].anum==num)
            {
                p++;
                b[i].deposit( );
                break;
            }
        }
        if(p==1)
        {
            cout<<"This account number has not available."<<endl;
        }

        p=0;
        goto x;
        break;
    case 2:
        cout<<"Enter bank account number :";
        cin >>num;
        for(int i=0;i<n;i++)
        {
            if(b[i].anum==num)
            {
                p++;
                cout << "Enter the amount you want to withdraw :";
                cin >> a;
                b[i].withdraw(a);
                break;
            }
        }
        if(p==1)
            cout<<"This account number has not available."<<endl;
        p=0;
        goto x;
        break;
    case 3:
        cout<<"Enter bank account number :";
        cin >>num;
        for(int i=0;i<n;i++)
        {
            if(b[i].anum==num)
            {
                p++;
                cout << "Your current amount is :"<<b[i].balance<<endl;
                break;
            }
        }
        if(p==1)
            cout<<"This account number has not available."<<endl;
        p=0;
        goto x;
        break;
    case 4:
        cout <<"Thank you !!";
        break;
    default :
        cout <<"please enter valid choice .";
        goto x;
    }
return 0;
}
