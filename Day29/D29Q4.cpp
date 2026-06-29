/*Write a program to Create inventory management system. */

#include <iostream>
using namespace std;

int main() {
    int productId, quantity;
    string productName;
    float price, totalValue;

    cout << "***** Inventory Management System *****\n";

    cout << "Enter Product ID: ";
    cin >> productId;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, productName);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: ";
    cin >> price;

    totalValue = quantity * price;

    cout << "\n***** Product Details *****\n";
    cout << "Product ID      : " << productId << endl;
    cout << "Product Name    : " << productName << endl;
    cout << "Quantity        : " << quantity << endl;
    cout << "Price per Item  : Rs. " << price << endl;
    cout << "Total Value     : Rs. " << totalValue << endl;

    return 0;
}