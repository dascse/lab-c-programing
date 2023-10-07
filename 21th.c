//
// Created by Admin on 10/7/2023.
//
#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter the number:");
    scanf("%d", &num1);
    printf("Enter the number:");
    scanf("%d", &num2);
    if (num1 < num2) {
        printf("your entered  number:%d is largest,num2");
    } else if (num1 > num2) {
        printf("your entered number:%d is largest", num1);
    } else {
        printf("your entered number are equal:%d", num1, num2);
    }
    return 0;

}