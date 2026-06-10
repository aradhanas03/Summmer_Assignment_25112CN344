/* Write a program to Generate Fibonacci series */

#include <stdio.h>

int main() {
    int n, i, fst = 0, snd = 1, nxt;

    printf("enter positive integer : ");
    scanf("%d", &n);

    printf("fibonacci series : ");

    for(i=0; i<n; i++) {
        printf("%d ", fst);
        nxt = fst + snd;
        fst = snd;
        snd = nxt;

    }
    return 0;
}