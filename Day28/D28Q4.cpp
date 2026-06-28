/*Write a program to Create contact management system. */

#include <iostream>
using namespace std;

int main() {
    string name, email;
    long long mobile;

    cout << "***** Contact Management System *****\n";

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    cin.ignore();

    cout << "Enter Email: ";
    getline(cin, email);

    cout << "\n***** Contact Details *****\n";
    cout << "Name          : " << name << endl;
    cout << "Mobile Number : " << mobile << endl;
    cout << "Email         : " << email << endl;

    return 0;
}