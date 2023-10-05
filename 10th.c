//
// Created by Admin on 10/5/2023.
//
#include<stdio.h>
int main(){
    float a,b,c;
    float s ,ar;
    printf("Enter the side a:");
    scanf("%f",&a);
    printf("Enter the side b:");
    scanf("%f",&b);
    printf("Enter the side c:");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle=%2f",ar);

    return 0;

}