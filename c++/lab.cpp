#include<iostream>
#include<map>
using namespace std;

class account 
{
    int account_num;
    string account_name;
    float account_balance;
    static int account_created;
    public :
    account () : account_num(0),account_name("INVALID USER"),account_balance(0.0) { }
    account (int num, string name,float balance): account_num(num),account_name(name),account_balance(balance)  { }
    void display_details ( ) const
    {
        cout << "Account number : " <<account_num<<endl<< "Account name : "<< account_name << endl << "Account balance : "<<account_balance<<endl;
    }
    static void transfer(account &from , account &to , float transfer_balance) ;
};

void transfer(account &form , account &to , float transfer_balance)
{
    if(form.account_balance >= transfer_balance)
    {
        form.account_balance -= transfer_balance;
        to.account_balance += transfer_balance;
        cout <<"You are successfully transfer ammount "
    }
}