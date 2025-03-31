#include<iostream>
#include<iomanip> // Include for fixed and setprecision

using namespace std;

class bank
{
public:
    string name;
    double anum;
    float balance;

    void deposit()
    {
        float bl;
        cout << "Enter the amount you want to add: ";
        cin >> bl;
        balance += bl;
        cout << "You successfully added the amount to your account." << endl;
        cout << "Your current balance is: " << fixed << setprecision(0) << balance << endl;
    }

    void withdraw(float x)
    {
        if (balance <= 0 || balance < x) // Check if balance is insufficient
        {
            cout << "You do not have enough balance to withdraw." << endl;
        }
        else
        {
            balance -= x;
            cout << "You successfully withdrew your amount." << endl;
            cout << "Current balance is: " << fixed << setprecision(0) << balance << endl;
        }
    }

    void abalance()
    {
        cout << "Your current balance is: " << fixed << setprecision(0) << balance << endl;
    }
};

int main()
{
    int n;
    double num, a;
    short int c;
    
    cout << "How many accounts do you want to create? ";
    cin >> n;
    
    bank b[n]; // Creating an array of bank accounts
    
    for (int i = 0; i < n; i++)
    {
        cout << "--------------------------------------------------------" << endl;
        cout << i + 1 << ") Enter bank account holder name: ";
        cin >> b[i].name;
        cout << i + 1 << ") Enter bank account number: ";
        cin >> b[i].anum;
        cout << i + 1 << ") Enter bank account balance: ";
        cin >> b[i].balance;
    }

x: 
    cout << "--------------------------------------------------------" << endl;
    cout << "Enter choice " << endl
         << "1) Deposit " << endl
         << "2) Withdraw " << endl
         << "3) Check the balance" << endl
         << "4) Exit " << endl << endl;
    cout << "Enter choice: ";
    cin >> c;

    cout << "--------------------------------------------------------" << endl;

    switch (c)
    {
    case 1:
        cout << "Enter bank account number: ";
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (b[i].anum == num)
            {
                b[i].deposit();
                goto x;
            }
        }
        cout << "This account number is not available." << endl;
        goto x;
        
    case 2:
        cout << "Enter bank account number: ";
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (b[i].anum == num)
            {
                cout << "Enter the amount you want to withdraw: ";
                cin >> a;
                b[i].withdraw(a);
                goto x;
            }
        }
        cout << "This account number is not available." << endl;
        goto x;

    case 3:
        cout << "Enter bank account number: ";
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (b[i].anum == num)
            {
                cout << "Your current balance is: " << fixed << setprecision(0) << b[i].balance << endl;
                goto x;
            }
        }
        cout << "This account number is not available." << endl;
        goto x;

    case 4:
        cout << "Thank you!!" << endl;
        cout<<"My name is : Dhruvin Vaghasiya."<<endl<<"My id is : 24CE137."<<endl;
        break;

    default:
        cout << "Please enter a valid choice." << endl;
        goto x;
    }

    return 0;
}
