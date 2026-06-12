/*Write a program to Write function for Armstrong. */

#include <stdio.h>
#include <math.h>

int isArmstrong(int a) {
    int original = a, temp = a;
    int digits = 0, rem;
    long long sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = a;

    while (temp > 0) {
        rem = temp % 10;
        sum += (long long)pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong Number", n);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}