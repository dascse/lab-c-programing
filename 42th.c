//Write a program in c to find the factorial of n.
#include<stdio.h>
int main()
{
    int a=1,n;;
    int i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        a=i*a;
        i++;
    }
    printf("The factorial of the number %d is:%d",n,a);
}