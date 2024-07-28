#include<stdio.h>
#include<conio.h>
void main(){
    float angle1,angle2,angle3;
    printf("Enter first angle of triangle : ");
    scanf("%f",&angle1);
    printf("Enter second angle of triangle : ");
    scanf("%f",&angle2);
    angle3=180-angle1-angle2;
    printf("The third angle of your triangle is : %.2f ",angle3);

}