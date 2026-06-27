/*Write a program to Create salary management system. */

#include <iostream>
using namespace std;

int main() {
    int empId;
    string name;
    float basicSalary, bonus, totalSalary;

    cout << "***** Salary Management System *****\n";

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    bonus = basicSalary * 0.10;
    totalSalary = basicSalary + bonus;

    cout << "\n***** Salary Details *****\n";
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "Bonus         : " << bonus << endl;
    cout << "Total Salary  : " << totalSalary << endl;

    return 0;
}