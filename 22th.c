//
// Created by Admin on 10/7/2023.
//
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",& num);
    if(num % 2==0) {
        printf("%d a even number",num);
    }
        else{
            printf("%d odd",num);

        }
        return 0;

}