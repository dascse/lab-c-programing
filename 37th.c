//
// Created by Admin on 10/9/2023.
//
#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter the number");
    scanf("%d",&b);
    printf("Enter the number");
    scanf("%d",&c);
    printf("Enter the number");
    scanf("%d",&d);
    if (a>b && a>c && a>d) {
        printf( "%d is large\n",a);
    }

    else if(b>a && b>c && b>d){
        printf( "%d is large\n",b);
    }
    else if(c>b && c>a && c>d){
        printf( "%d is large\n",c);
    }
    else if(d>b && d>c && d>a) {
        printf("%d is larger\n", d);
    }
    else
    {
        printf("thank you" );
    }
        return 0;
}