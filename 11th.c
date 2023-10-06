//
// Created by Admin on 10/5/2023.
//
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2,a,b;
    float dist;
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
    dist=sqrt(pow(a,2))+(pow(b,2));
    printf("distance between two parts is=%f",dist);
}