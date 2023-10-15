//Write a program in c to print Hello World for n number of times without using any loop if -1 is encountered,stop the program
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    label:
    printf("Hello World");

    if(n>0)goto label;

    if(n==(-1)){

        printf("Stop!");
        n--;
    }
    else{
        printf("\nnothing");
    }
}
