/*Write a program to Write function to find sum of two numbers.*/

#include <stdio.h>

int sum(int a,int b) {
    return a + b;
}

int main() {
    int x, y, result;

    printf("enter two numbers : ");
    scanf("%d %d", &x, &y);

    result = sum(x,y);

    printf("sum of %d and %d is %d", x, y, result);
    return 0;

}