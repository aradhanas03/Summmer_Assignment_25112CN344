/*Write a program to Print Armstrong numbers in a range.*/

#include <stdio.h>
#include <math.h>

int main() {
    int start, end, n, temp, d, digits;
    int sum;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the eange : ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (n = start; n <= end; n++) {
        temp = n;
        digits = 0;
        sum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        while (temp != 0) {
            d = temp % 10;
            sum += pow(d, digits);
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}