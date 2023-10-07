//
// Created by Admin on 10/7/2023.
//
#include<stdio.h>
int main() {
    int age;
    printf("Enter the number:");
    scanf("%d", &age);
    if (age <= 18) {
        printf("not eligible to vote");

    } else {
        printf("eligible to vote");
    }
    return 0;
}