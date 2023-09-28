//
// Created by Admin on 9/28/2023.
//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two number:\n");
    scanf("%d%d",&a,&b);
    printf("Before swaping:a=%d,b=%d\n",a,b);
    a=b*a;
    b=a/b;
    a=b/a;
    printf("After swaping;a=%d,b=%d\n",a,b);


}

