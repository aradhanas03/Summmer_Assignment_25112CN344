/*Write a program to Union of arrays. */

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionArr[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr1[i] == unionArr[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unionArr[k++] = arr1[i];
        }
    }

    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

    cout << "Union of arrays: ";
    for (int i = 0; i < k; i++) {
        cout << unionArr[i] << " ";
    }

    return 0;
}