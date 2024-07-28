#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    printf("Input an integer number :\n");
    scanf("%d",&num);
    if(num>0){
        printf("The integer is a positive number.\n");
    }
    else{
        printf("The integer is not positive.\n");
    }
    printf("General");
    getch();
}