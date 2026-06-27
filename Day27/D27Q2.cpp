/*Write a program to Create employee management system.*/

#include <iostream>
using namespace std;

int main() {
    int empId;
    string name;
    float salary;

    cout << " ***** Employee Management System *****\n";

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n***** Employee Record *****\n";
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Salary        : " << salary << endl;

    if (salary >= 30000)
        cout << "Status        : High Salary";
    else
        cout << "Status        : Low Salary";

    return 0;
}