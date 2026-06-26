/*Write a program to Create ATM simulation. */

#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000, amount;

    cout << "===== ATM Simulation =====\n";

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Invalid PIN!";
        return 0;
    }

    cout << "\n1. Check Balance";
    cout << "\n2. Deposit Money";
    cout << "\n3. Withdraw Money";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Current Balance = Rs. " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Updated Balance = Rs. " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Updated Balance = Rs. " << balance;
            } else {
                cout << "Insufficient Balance!";
            }
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}