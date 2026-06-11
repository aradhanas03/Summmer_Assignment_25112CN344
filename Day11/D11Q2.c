/*Write a program to Write function to find maximum.*/

#include <stdio.h>

int maximum(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int x, y, max;

    printf("enter two numbers : ");
    scanf("%d %d", &x, &y);

    max = maximum(x,y);

    printf("The maximum of %d and %d is %d.\n", x, y, max);
    return 0;
    
}