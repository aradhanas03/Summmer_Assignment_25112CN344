/*Write a program to Find maximum frequency element. */

#include <iostream>
using namespace std;

int main() {
    int arr[20], n;
    int maxFreq = 0, maxElement;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0; 

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum Frequency Element = " << maxElement << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}