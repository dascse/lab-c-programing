//
// Created by Admin on 10/6/2023.
//
#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    int rt;
    float d;
    printf("enter A:");
    scanf("%d", &a);
    printf("enter B:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d",&c);
    d=pow(a,2)+pow(b,2);
    rt=(pow(c,2)==d)?
            printf("It is a right angle triangle",rt):
       printf("It is not right angle triangle",d);
}
