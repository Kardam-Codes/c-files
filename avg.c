#include<stdio.h>
#include<conio.h>
void main (){
    float a,b,c;
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    printf("Enter third number : ");
    scanf("%f",&c);
    printf("The average of these three numbers is : %.2f",(a+b+c)/3);
}