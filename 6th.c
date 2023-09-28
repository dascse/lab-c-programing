
#include<stdio.h>
int main() {
    float a;
    printf("Enter the amount in rupees:\n");
    scanf("%f", &a);
    printf("Enter the amount in dollers:%f\n", a * 0.012);
    printf("Enter the amount in europs:%f\n", a * 0.011);
    printf("Enter the amount in yen:%f\n", a * 1.77);
    printf("Enter the amount in rubel:%f\n", a * 1.16);
}
