/*Write a program to Frequency of an element. */

#include <iostream>
using namespace std;

int main() {
    int arr[20], n, element, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to find frequency: ";
    cin >> element;

    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    cout << "Frequency of " << element << " = " << count;

    return 0;
}