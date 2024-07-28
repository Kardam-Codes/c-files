#include<stdio.h>
#include<conio.h>
void main (){
    // clrscr();  --> clears the console screen
    float a, b;
    printf("Enter first number: \n");
    scanf("%f", &a);
    printf("Enter second number: \n");
    scanf("%f", &b);
    printf("Sum of two numbers is: %.3f\n", a+b);
    getch();
}