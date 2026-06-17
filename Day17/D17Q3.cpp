/*Write a program to Intersection of arrays. */

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of arrays: ";

    for (int i = 0; i < n1; i++) {
        bool found = false;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}