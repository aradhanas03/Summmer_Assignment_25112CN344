/*Write a program to Write function for palindrome. */

#include <stdio.h>

int isPalindrome(int a) {
    int original = a, reverse = 0, rem;

    while(a > 0) {
        rem = a % 10;
        reverse = reverse * 10 + rem;
        a = a / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("%d is a Palindrome Number", n);
    else
        printf("%d is Not a Palindrome Number", n);

    return 0;
}