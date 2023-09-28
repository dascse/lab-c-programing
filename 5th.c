//
// Created by Admin on 9/28/2023.
//
#include<stdio.h>
int main() {
    float a, f;
    printf("Enter the area:\n");
    scanf("%f", &a);
    f = ((3 * 1.732) / 2) * a * a;
    printf("area of the hexagon=%f", f);
}