/* C assingment
    made by--shahrukh
    roll--2017UBT1029  */

#include<stdio.h>
#include<conio.h>
void main(){
float a;
 int n;
 clrscr();
 printf("---------enter number to check-- number is integer or not- ");
 scanf("%f",&a);
 n=(int)a;
 a=a-n;
 // (a)'s  final value will be equal to zero if a is integer
 if(a==0)
 printf("given number is integer");
 else
 printf("giver number is not a integer");
 getch();
 }









