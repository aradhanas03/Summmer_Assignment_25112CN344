/*Write a program to Create student record management system.*/

#include <iostream>
using namespace std;

int main() {
    int rollNo;
    string name;
    float marks;

    cout << "===== Student Record Management System =====\n";

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n===== Student Record =====\n";
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;

    if (marks >= 40)
        cout << "Result      : Pass";
    else
        cout << "Result      : Fail";

    return 0;
}