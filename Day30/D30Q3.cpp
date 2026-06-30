/*Write a program to Create mini employee management system. */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int empId[n];
    string name[n];
    long long salary[n];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> empId[i];

        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, name[i]);

        cout << "Salary: ";
        cin >> salary[i];

        cin.ignore();
    }

    cout << "\n***** Employee Records *****\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID   : " << empId[i] << endl;
        cout << "Employee Name : " << name[i] << endl;
        cout << "Salary        : " << salary[i] << endl;

        if (salary[i] >= 30000)
            cout << "Status        : High Salary" << endl;
        else
            cout << "Status        : Low Salary" << endl;
    }

    return 0;
}