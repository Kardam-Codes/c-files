#include<stdio.h>

int main()
{
    float a, b;
    printf("Enter the breadth of rectangle : \n ");

    scanf("%f", &a);

    printf("Enter the length of rectangle : \n");

    scanf("%f", &b);

 float c = a*b;
    printf("The area of Corresponding rectangle is : %f", c);

    return 0;
}