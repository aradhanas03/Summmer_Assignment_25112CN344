/*Write a program to Create menu-driven string operations system.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "1. Display String\n";
    cout << "2. Find Length\n";
    cout << "3. Reverse String\n";
    cout << "4. Convert to Uppercase\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "String = " << str;
            break;

        case 2:
            cout << "Length = " << str.length();
            break;

        case 3:
            reverse(str.begin(), str.end());
            cout << "Reversed String = " << str;
            break;

        case 4:
            for (int i = 0; i < str.length(); i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            cout << "Uppercase String = " << str;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}