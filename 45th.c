#include<stdio.h>
int main()
{
    int i,j,d,a;
    int star=1;

    printf("enter");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<=a;j++){

            printf(" ");

        }
        for(d=1;d<=star;d++)//d=a,d=i,d=2*1-1  two different
        {
            printf("%d",d);

        }
        star=star+2;
        printf("\n");
    }

}