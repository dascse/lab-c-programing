//
// Created by Admin on 10/5/2023.
//
#include<stdio.h>
int main(){
    float kb;
    float gb;
    float tb;
    float mb;
    printf("Enter the size of kb:");
    scanf("%f",&kb);
    mb=kb/1000;
    gb=mb/1000;
    tb=gb/1000;
    printf("size in mb =%f",mb);
    printf("size in gb=%f",gb);
    printf("size in tb=%f",tb);
}