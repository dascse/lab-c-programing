//
// Created by Admin on 10/7/2023.
//
#include<stdio.h>
int main() {
    int beng, eng, math, physics, chem, total, avg;
    printf("ENTER THE MARKS:\n");
    printf("Enter the number beng:\n");
    scanf("%d", &beng);
    printf("Enter the number eng:\n");
    scanf("%d", &eng);
    printf("Enter the number physics:\n");
    scanf("%d", &physics);
    printf("Enter the number chem:\n");
    scanf("%d", &chem);
    printf("Enter the number math:\n");
    scanf("%d", &math);
    total = beng + eng + physics + chem + math;
    avg = total / 5;
    if (avg >= 95 && avg <= 100) {
        printf("AA");
    } else if (avg >= 95 && avg <= 100) {
        printf("");
    } else if (avg >= 85 && avg < 95) {
        printf("A+");
    } else if (avg >= 70 && avg < 85) {
        printf("A");
    } else if (avg >= 60 && avg <= 70) {
        printf("B");
    } else if (avg >= 45 && avg <= 60) {
        printf("C");
    } else {
        printf("Try again");
    }
    return 0;
}