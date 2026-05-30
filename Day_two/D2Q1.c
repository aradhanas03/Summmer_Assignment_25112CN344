#include <stdio.h>
int main() {
<<<<<<< HEAD
    int n, digit, sum=0;
    printf("enter positive integer");
    scanf("%d", &n);

    while(n!= 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    
    printf("Sum of digits = %d", sum);
    return 0;
}
=======
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
>>>>>>> d4a24036f8612209ee9ca7d92b17d6433792ccd0
