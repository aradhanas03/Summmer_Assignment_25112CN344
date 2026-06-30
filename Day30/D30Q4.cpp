/*Program to Develop complete mini project using arrays, strings and functions. */

#include <iostream>
using namespace std;

const int MAX = 100;

void addItems(int id[], string name[], string place[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << endl;

        cout << "Enter Item ID: ";
        cin >> id[i];

        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, name[i]);

        cout << "Enter Found Location: ";
        getline(cin, place[i]);
    }
}

void displayItems(int id[], string name[], string place[], int n) {
    cout << "\n***** Lost & Found Records *****\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRecord " << i + 1 << endl;
        cout << "Item ID : " << id[i] << endl;
        cout << "Item    : " << name[i] << endl;
        cout << "Location: " << place[i] << endl;
    }
}

void searchItem(int id[], string name[], string place[], int n) {
    string key;

    cin.ignore();

    cout << "\nEnter Item Name to Search: ";
    getline(cin, key);

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (name[i] == key) {
            cout << "\nItem Found!\n";
            cout << "ID       : " << id[i] << endl;
            cout << "Location : " << place[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Item Not Found!";
}

int main() {

    int n, choice;

    int id[MAX];
    string name[MAX];
    string place[MAX];

    cout << "Enter Number of Items: ";
    cin >> n;

    addItems(id, name, place, n);

    cout << "\n***** MENU *****\n";
    cout << "1. Display Records\n";
    cout << "2. Search Item\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            displayItems(id, name, place, n);
            break;

        case 2:
            searchItem(id, name, place, n);
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}