/*Write a program to Find missing number in array. */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;

    int sum = 0;

    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    cout << "Missing Number = " << total - sum;

    return 0;
}