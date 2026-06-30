/*Write a program to Create mini library system*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int bookId[n];
    string bookName[n];
    string author[n];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> bookId[i];

        cin.ignore();

        cout << "Book Name: ";
        getline(cin, bookName[i]);

        cout << "Author Name: ";
        getline(cin, author[i]);
    }

    cout << "\n***** Library Records *****\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID     : " << bookId[i] << endl;
        cout << "Book Name   : " << bookName[i] << endl;
        cout << "Author Name : " << author[i] << endl;
    }

    return 0;
}