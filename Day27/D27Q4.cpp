/*Write a program to Create marksheet generation system. */

#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5, total, percentage;
    char grade;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks of maths: ";
    cin >> m1;

    cout << "Enter Marks of science: ";
    cin >> m2;

    cout << "Enter Marks of hindi: ";
    cin >> m3;

    cout << "Enter Marks of english: ";
    cin >> m4;

    cout << "Enter Marks of social science: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n***** Marksheet *****\n";
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (grade == 'F')
        cout << "Result      : Fail";
    else
        cout << "Result      : Pass";

    return 0;
}