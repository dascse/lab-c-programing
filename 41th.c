//Write a program in c to check whether a number is prime or composite.
#include<stdio.h>
int main() {
    int i, n;
    int a = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number", n);
            a=1;
            break;
        }
    }

    if(a==0)
    {
        printf("%d is a prime number",n);
    }
    else
        printf("not prime");
}
