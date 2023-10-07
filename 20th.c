#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<=0){
        printf("you entered a nagetive number");
    }
    else if(num>0){
        printf("you entered a positive number");
    }
    else{
        printf("you entered wrong");
    }
    return 0;
}