#include<stdio.h>
#include<conio.h>
void main(){
    float pamt,rate,tperiod;
    printf("Enter the principal amount in Rupees :");
    scanf("%f",&pamt);
    printf("Enter the rate of interest :");
    scanf("%f",&rate);
    printf("Enter the Time period in years :");
    scanf("%f",&tperiod);
    printf("The calculated simple interest is : Rs %.2f",(pamt*rate*tperiod)/100);
    
}