//
// Created by Admin on 10/5/2023.
//
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2,a,b;
    float dist,d;

    printf("enter x1=");
    scanf("%d",&x1);
    printf("enter y1=");
    scanf("%d",&y1);
    printf("enter x2=");
    scanf("%d",&x2);
    printf("enter y2=");
    scanf("%d",&y2);
    a=x2-x1;
    b=y2-y1;
    dist=(pow(a,2))+(pow(b,2));
    d=sqrt(dist);
    printf("distance between two parts is=%.2f",d);
}