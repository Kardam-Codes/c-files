#include<stdio.h>
#include<conio.h>
void main(){
    int tmins,a,b;
    printf("Enter the total minutes:\n");
    scanf("%d",&tmins);
a=tmins%60,b=(tmins-a)/60;
printf("Hours and minutes respectively are %d and %d",b,a);
}
