#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter the number");
    scanf("%d",&b);
    if (a ==b) {
        printf("area of a square%d ",a*a);
    } else {
        printf("area of a rectangel%d",a*b);
    }
    return 0;
}