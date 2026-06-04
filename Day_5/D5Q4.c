/*Write a program to Find largest prime factor.*/

#include <stdio.h>
 int main() {
    int n, i, j, isprime;
    int largestprime = -1;

    printf("enter a number : ");
    scanf("%d", &n);

    for(i=2; i<=n; i++) {
        if(n % i == 0) {
            isprime = 1;

            for(j=2; j<= i/2; j++) {
                if(i % j == 0){
                    isprime = 0;
                    break;
                }
            }

            if(isprime) {
                largestprime = i;
            }
        }    
    }

    printf("largest prime factor %d is : ", largestprime);
    return 0;
 }