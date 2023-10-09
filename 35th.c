//
// Created by Admin on 10/9/2023.
//
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the temperature");
    scanf("%d",&a);

    if (a >=100) {
        printf("boiling temperature");
    } else {
        printf("not boiling");
    }
    return 0;
}