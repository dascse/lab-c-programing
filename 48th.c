//
// Created by Admin on 10/13/2023.
//
//Write a program in c to print the following
/*
* * * * *
*       *
*       *
*       *
* * * * **     */
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1|| i==n || j==1 || j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}