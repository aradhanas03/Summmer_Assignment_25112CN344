/*Write a program to Check Armstrong number.*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, d, digits, sum;
    
    printf("enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    while (temp != 0) {
        d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    }
    else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}