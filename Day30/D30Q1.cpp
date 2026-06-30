/*Write a program to Create student record system using arrays and strings.*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];
    string name[n];
    float marks[n];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Name: ";
        getline(cin, name[i]);

        cout << "Marks: ";
        cin >> marks[i];

        cin.ignore();
    }

    cout << "\n***** Student Records *****\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << roll[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Marks       : " << marks[i] << endl;

        if (marks[i] >= 40)
            cout << "Result      : Pass" << endl;
        else
            cout << "Result      : Fail" << endl;
    }

    return 0;
}