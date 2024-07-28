#include <stdio.h>
#include <conio.h>
void main()
{
    int a, years, c, d, months, days;
    printf("Enter the total number of days : ");
    scanf("%d", &a);
    years = a / 365;
    // c = a / years;
    d = a - (365*years);
    months = d / 30;
    days =  d- (months*30);
    printf("%d year, %d months, %d days", years, months, days);

}
