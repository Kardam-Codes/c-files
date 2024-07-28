#include<stdio.h>
#include<conio.h>
void main(){
    float kph,mph;
    printf("Enter the speed in kilometers per hour i.e. kph : ");
    scanf("%f",&kph);
    mph=kph/1.60932;
    printf("The speed is %.2f miles per hour i.e. %.2f mph",mph,mph);
}