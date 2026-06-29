/*Write a program to Create menu-driven array operations system.*/

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;
    int sum = 0, largest, smallest;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n===== Array Operations =====\n";
    cout << "1. Display Array\n";
    cout << "2. Find Sum\n";
    cout << "3. Find Largest Element\n";
    cout << "4. Find Smallest Element\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2:
            for (int i = 0; i < n; i++)
                sum += arr[i];

            cout << "Sum = " << sum;
            break;

        case 3:
            largest = arr[0];
            for (int i = 1; i < n; i++) {
                largest = max( arr[i], largest);
            }
            cout << "Largest Element = " << largest;
            break;

        case 4:
            smallest = arr[0];
            for (int i = 1; i < n; i++) {
                smallest = min( arr[i], smallest);
            }
            cout << "Smallest Element = " << smallest;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}