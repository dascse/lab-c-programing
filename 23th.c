#include<stdio.h>
int main() {
    int year;
    printf("Enter the number:");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("%d is a leap year", year);
    } else if (year % 400 == 0) {
        printf("%d year is leap year", year);
    } else if (year % 100 == 0) {
        printf("%d is leap year", year);
    } else {
        printf("not leap year");
    }
    return 0;
}
// Created by Admin on 10/7/2023.
//
