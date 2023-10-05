
#include<stdio.h>
int main(){
    int a,b,c,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    s1=(a*a)+2*a*b+(b*b);
            s2=(a*a)-2*a*b+(b*b);
            s3=(a*a)-(b*b);
            s4=(a*a)+(2*a*b)+(b*b)+(c*c)+(2*b*c)+(2*c*a);
            s5=(a*a)+(2*a*b)+(b*b)+(c*c)-(2*b*c)-(2*c*a);
            s6=(a*a)-(2*a*b)+(b*b)+(c*c)-(2*b*c)+(2*c*a);
            s7=(a*a)-(2*a*b)+(b*b)+(c*c)+(2*b*c)-(2*c*a);
            s8=(a*a)-(2*a*b)+(b*b)+(c*c)+(2*b*c)-(2*c*a);
            s9=(a*a*a)+(b*b*b)+3*a*b*(a+b);
            s10=(a*a*a)-(b*b*b)-3*a*b*(a-b);
            s11=(a+b)*(a+b)*(a+b)-(3*a*b*(a+b));
            s12= (a-b)*(a-b)*(a-b)+(3*a*b*(a-b));
            s13=(a+b+c)*((a*a)+(b*b)+(c*c)-a*b-b*c-c*a);
            printf("\ns1=%d",s1);
    printf("\ns2=%d",s2);
    printf("\ns3=%d",s3);
    printf("\ns4=%d",s4);
    printf("\ns5=%d",s5);
    printf("\ns6=%d",s6);
    printf("\ns7=%d",s7);
    printf("\ns8=%d",s8);
    printf("\ns9=%d",s9);
    printf("\ns10=%d",s10);
    printf("\ns11=%d",s11);
    printf("\ns12=%d",s12);
    printf("\ns13=%d",s13);



}
