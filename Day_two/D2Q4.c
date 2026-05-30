<<<<<<< HEAD
/*Write a program to Check whether a number is
palindrome.*/

#include <stdio.h>

int main() {
    int number, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (original == reverse)
        printf("The number is a Palindrome");
    else
        printf("The number is not a Palindrome");

=======
#include <stdio.h>
int main() {
    int n, count=0;
    printf("enter positive integer");
    scanf("%d", &n);

    while(n!= 0) {
        n = n/10;
        count++;
    }
    printf("number of digits= %d\n", count);
>>>>>>> d4a24036f8612209ee9ca7d92b17d6433792ccd0
    return 0;
}