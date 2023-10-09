#include<stdio.h>
int main() {
    char c;
    printf("Enter the number");
    scanf("%c",&c);
    if (c >= 'A' && c <='Z') {
        printf("upper case");
    } else if (c >= 'a' && c <= 'z')
    {
        printf("lower case");
    }
    else {
        printf("nothing");
    }
    return 0;
}