#include <iostream>
#include <string>
using namespace std;
int main() {
    string ownerName, accountNumber;
    double balance = 0.0, amount;
    int choice;

    cout << "Enter Account Holder's name: ";
    getline(cin, ownerName);
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter initial deposit amount: ";
    cin >> balance;

    do {
        cout << "\nBanking Menu:\n";
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: $" << amount << "\nNew Balance: $" << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        } 
        else if (choice == 2) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: $" << amount << "\nNew Balance: $" << balance << endl;
            } else {
                cout << "Invalid withdrawal amount or insufficient balance!" << endl;
            }
        } 
        else if (choice == 3) {
            cout << "Account Holder: " << ownerName << "\nAccount Number: " << accountNumber
                 << "\nCurrent Balance: $" << balance << endl;
        } 
        else if (choice == 4) {
            cout << "Exiting the banking system. Thank you!" << endl;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
