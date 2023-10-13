//
// Created by Admin on 10/6/2023.
//
#include<stdio.h>
#include<math.h>
int main() {
    int x, y, z;
    float a, b, c;
    float d;
    printf("Enter the principle:");
    scanf("%d",&x);
    printf("Enter the rate");
    scanf("%f",&a);
    printf("Enter the time");
    scanf("%d",&y);
    c = x * a * y / 100;
    d=(1+a/100);
    b = x* pow(d,y);
    printf("Simple interest is%f\n",c);
    printf("Compound interest is:%f\n", b);
    return 0;
}


