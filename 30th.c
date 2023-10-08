//
// Created by Admin on 10/8/2023.
//syntax error
#include<stdio.h>int main() {
int a[5];
int a,b,c;
printf("hello")//missing semicolon
printf("%d",a[10]);//driver code,runtime error
a*b=c;//this will generate a sementic error

}

#include<stdio.h>
int Main() {//linker error
    int a = 5;
    printf("%d", a);
}

#include<stdio.h>
int main() {
int a=5;
int b=10;
if(b=0){//logical error
    printf("not posible");
}
else{
    printf("the out put is:%f",b/a);
}
}
