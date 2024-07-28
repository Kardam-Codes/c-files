#include<stdio.h>
#include<conio.h>
void main(){
    float a,b,c;
    printf("Enter number 1 :");
    scanf("%f",&a);
    printf("Enter number 2 :");
    scanf("%f",&b);
    printf("Enter number 3 :");
    scanf("%f",&c);
    a+=10;
    printf("The value of a is: %.f ",a);
    b-=2;
    printf("The value of b is: %.f ",b);
    c/=b;
    printf("The value of c is: %.2f",c);
}

