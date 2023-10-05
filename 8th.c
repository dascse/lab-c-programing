//
// Created by Admin on 10/5/2023.
//
#include<stdio.h>
#include<math.h>
int main(){
    float a;
    float rr, ar;
    printf("Enter the sides:");
    scanf("%f",&a);
    ar=((3*1.732)/2);
    rr=ar*a*a;
    printf("area of a hexagon=%f",rr);
    return 0;
}
