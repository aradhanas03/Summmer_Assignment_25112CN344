/*Write a program to Write function to check prime. */

#include <stdio.h>

int isprime(int a) {
    if(a <= 1)
        return 0;
    for(int i = 2; i * i <= a; i++) {
        if(a % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int x;

    printf("enter a number : ");
    scanf("%d", &x);
    
    if(isprime(x)) {
        printf("%d is prime number", x);
    }
    else {
        printf("%d is not a prime number", x);
    }
    return 0;
}