#include<stdio.h>
void main(){
    int a=50;
    int b=60;
    int c=70;
    //    50    51    52    60    61    70    71    54    63      73
    int d=a++ + a++ + a++ + b++ + b++ + c++ + c++ + ++a + ++b  + ++c;
    // c = a++ + a++ + b++ + ++b + ++b;
    printf("%d",d);
}