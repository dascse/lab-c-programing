//
// Created by Admin on 10/9/2023.
//
#include<stdio.h>
int main() {
    int i,b;
    i=0;
    int c=0;
    printf("Enter the number");
    scanf("%d",&b);
    while(i<=b) {
        c = c + i;
        i++;
    }
        printf("\nsome of some is:%d",c);

}