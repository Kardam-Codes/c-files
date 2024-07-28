#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    float a, b, c, d, e, f, g, h;
    printf("Hey User enter 1 for addition, 2 for substraction, 3 for multiplication, ");
    scanf("%f", &num);
    switch (num)
    {
    case 1:
        printf("Enter  first number : ");
        scanf("%.2f", &a);
        printf("Enter second number : ");
        scanf("%.2f", &b);
        printf("The addition of 2 numbers is %.2f", a + b);
        break;
    case 2:
        printf("Enter  first number : ");
        scanf("%.2f", &c);
        printf("Enter second number : ");
        scanf("%.2f", &d);
        printf("The substraction of 2 numbers is %.2f", c - d);
        break;
    case 3:
        printf("Enter  first number : ");
        scanf("%.2f", &e);
        printf("Enter second number : ");
        scanf(".2%f", &f);
        printf("The multiplication of 2 numbers is %.2f", e * f);
        break;
    case 4:
        printf("Enter  first number : ");
        scanf("%.2f", &g);
        printf("Enter second number : ");
        scanf("%.2f", &h);
        printf("The division of 2 numbers is %.2f", g / h);
        break;
    default:
        printf("Please input a valid number. ");
        break;
    }
}