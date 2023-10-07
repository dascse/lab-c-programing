//
// Created by Admin on 10/7/2023.
//
#include<stdio.h>
int main() {
    int be, eng, math, physics, chem;
    float total, avg;
    float parcentage;
    char grade;
    printf("ENTER THE MARKS:\n");
    printf("Enter the number be:\n");
    scanf("%d", &be);
    printf("Enter the number eng:\n");
    scanf("%d", &eng);
    printf("Enter the number physics:\n");
    scanf("%d", &physics);
    printf("Enter the number chem:\n");
    scanf("%d", &chem);
    printf("Enter the number math:\n");
    scanf("%d", &math);
    total = be + eng + physics + chem + math;
    avg = total / 5;
    parcentage = (total / 500) * 100;
    if (avg >= 95 && avg <= 100) {
        grade = 'A';
      if (avg >= 85 && avg < 95)
          grade='A+';
    if (avg >= 70 && avg < 85)
                grade = 'B';
             if (avg >= 60 && avg <= 70)
                grade = 'c';
            if (avg >= 45 && avg <= 60)
                grade = 'D';

            else
                grade = 'E';


            printf("\n total marks is :\t %f/500\n", total);
            printf("\n total average:\t%f\n", avg);
            printf("\n percentage:\t%f\n", parcentage);
            printf("the grade is:\t%c\n", grade);
        }
        return 0;
    }