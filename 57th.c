//
// Created by Admin on 10/15/2023.
//
//Write a program in c to print the multiplication table of n.
#include<stdio.h>
int main()
{
    int i, n,j;
    printf("Enter the range:");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for( j=1;j<=10;j++)
        {
            printf("%d * %d=%d\n",i,j,i*j);
        }
        printf("--------------------\n");
    }
}
