#include<stdio.h>
#include<conio.h>
void main(){
    int a=5;
    int b=15;
    int c=20;
    //     19   19      17     16     16   20      20   20   5   15   20
   int d = a-- - --a + b++ + b++ + ++b + c-- - --c - c++ + a + b +c;
   printf("%d", d);
}