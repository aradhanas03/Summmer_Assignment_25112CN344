/*Write a program to Create library management system. */

#include <iostream>
using namespace std;

int main() {
    int bookId;
    string bookName, author;
    bool available;

    cout << "***** Library Management System *****\n";

    cout << "Enter Book ID: ";
    cin >> bookId;

    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, bookName);

    cout << "Enter Author Name: ";
    getline(cin, author);

    cout << "Is the book available? (1 = Yes, 0 = No): ";
    cin >> available;

    cout << "\n***** Book Record *****\n";
    cout << "Book ID      : " << bookId << endl;
    cout << "Book Name    : " << bookName << endl;
    cout << "Author Name  : " << author << endl;

    if (available)
        cout << "Status       : Available";
    else
        cout << "Status       : Not Available";

    return 0;
}