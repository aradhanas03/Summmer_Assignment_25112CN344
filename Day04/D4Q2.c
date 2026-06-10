/*Write a program to Find nth Fibonacci term.*/

#include <stdio.h>

int main() {
    int n, i, fst = 0, snd = 1, nxt;

    printf("enter positive integer : ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The %dst Fibonacci term is %d", n, fst);
    }
    else if (n == 2) {
        printf("The %dnd Fibonacci term is %d", n, snd);
    }
    else {
        for(i=3; i<=n; i++) {
            nxt = fst + snd;
            fst = snd;
            snd = nxt;
        }
        printf("The %dth Fibonacci term is %d", n, nxt);
    }
    return 0;
}