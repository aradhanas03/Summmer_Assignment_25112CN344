<<<<<<< HEAD
/*Write a program to Find product of digits.*/

#include <stdio.h>

int main() {
    int n, digit, product=1;
    printf("enter a number: ");
    scanf("%d", &n);

    while( n!= 0) {
        digit = n % 10;
        product = product * digit;
        n = n/10;
    }

    printf("product of digit = %d", product);
    return 0;
=======
#include <stdio.h>
int main() {
    
     int n, i, factorial=1;
     printf("enter positive integer");
     scanf("%d", &n);

     for(i=1; i<=n; i++) {
        factorial = factorial * i;
     }

     printf("factorial of %d is %d\n", n, factorial);
     return 0;
>>>>>>> d4a24036f8612209ee9ca7d92b17d6433792ccd0
}