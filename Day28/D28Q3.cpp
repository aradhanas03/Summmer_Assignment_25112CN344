/*Write a program to Create ticket booking system. */

#include <iostream>
using namespace std;

int main() {
    string name;
    int age, tickets;
    float ticketPrice = 500, totalAmount;

    cout << "***** Ticket Booking System *****\n";

    cout << "Enter Passenger Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    totalAmount = tickets * ticketPrice;

    cout << "\n***** Booking Details *****\n";
    cout << "Passenger Name : " << name << endl;
    cout << "Age            : " << age << endl;
    cout << "Tickets Booked : " << tickets << endl;
    cout << "Ticket Price   : Rs. " << ticketPrice << endl;
    cout << "Total Amount   : Rs. " << totalAmount << endl;

    cout << "\nBooking Successful!" << endl;

    return 0;
}