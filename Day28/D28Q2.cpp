/*Write a program to Create bank account system. */

#include <iostream>
using namespace std;

int main() {
    int accountNo;
    string name;
    float balance, deposit, withdraw;

    cout << "***** Bank Account System *****\n";

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\nEnter Deposit Amount: ";
    cin >> deposit;
    balance += deposit;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdraw;

    if (withdraw <= balance) {
        balance -= withdraw;
        cout << "\nWithdrawal Successful!\n";
    } else {
        cout << "\nInsufficient Balance!\n";
    }

    cout << "\n***** Account Details *****\n";
    cout << "Account Number : " << accountNo << endl;
    cout << "Account Holder : " << name << endl;
    cout << "Current Balance: Rs. " << balance << endl;

    return 0;
}