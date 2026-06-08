#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("The number is Prime");
    else
        printf("The number is not Prime");

    return 0;
}