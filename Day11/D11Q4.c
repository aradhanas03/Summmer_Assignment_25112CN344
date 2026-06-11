/*Write a program to Write function to find factorial. */

#include <stdio.h>

long long factorial(int a) {
    long long fact = 1;
    for(int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n; 
    long long result;

    printf("enter a number : ");
    scanf("%d", &n);

    result = factorial(n);
    
    printf("factorial = %11d", result);
    return 0;
}