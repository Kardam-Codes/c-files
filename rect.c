#include<stdio.h>
#include<conio.h>
void main() {
    float a,b;
    printf("Enter length of rectangle:\n");
    scanf("%f",&a);
    printf("Enter breadth of rectangle:\n");
    scanf("%f",&b);
printf("The area and perimeter of the rectangle are respectively %.2f and %.2f\n",a*b, 2*(a+b));
}