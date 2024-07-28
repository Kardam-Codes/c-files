#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c;
    // c = a;
    // a = b;
    // b = c;
    // printf("Now the values of a and b are : \n");
    // printf("%d , %d\n", a, b);
    a = a + b; // a=30
    b = a - b; //b=10
    a = a - b; //a=20

    printf("Now the values of a and b are : \n");
    printf("%d , %d", a, b);
}