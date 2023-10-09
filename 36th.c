//
// Created by Admin on 10/9/2023.
//
#include<stdio.h>
int main() {
    char c;
    printf("Enter the number");
    scanf("%c",&c);
     switch(c)
     {
         case'a':
         case'e':
         case'i':
         case'o':
         case'u':
         case'A':
         case'E':
         case'I':
         case'O':
         case'U':

         printf("Enter the number is vowel:%c",c);
         break;
         default:
             printf("Enter the number is consonent:%c",c);
     }
    return 0;
}