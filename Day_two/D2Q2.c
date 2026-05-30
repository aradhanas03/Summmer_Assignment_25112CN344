<<<<<<< HEAD
/*Write a program to Reverse a number*/

#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed number = %d", reverse);

=======
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

>>>>>>> d4a24036f8612209ee9ca7d92b17d6433792ccd0
    return 0;
}