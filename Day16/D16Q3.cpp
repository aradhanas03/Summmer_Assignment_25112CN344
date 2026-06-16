/*Write a program to Find pair with given sum. */

#include <iostream>
using namespace std;

int main() {
    int arr[20], n, sum;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter required sum: ";
    cin >> sum;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "No pair found.";
    }

    return 0;
}