//
// Created by Admin on 10/12/2023.
//
//Write a program print fibonacci series in a pattern.
#include<stdio.h>
int main()
{
    int row,i,j,temp1=1,temp2=1,backup=0;
    printf("Limit:\n");
    scanf("%d",&row);
    for( i=0;i<=row;i++)
    {
        for( j=0;j<temp1;j++)
        {
            printf("* ");
        }
        printf("\n");
        backup=temp2;
        temp2=temp1+temp2;
        temp1=backup;
    }
}