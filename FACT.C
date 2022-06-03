#include<stdio.h>
#include<conio.h>
//long int is required
fact(int a)
{if(a==0)
return 1;
else
return a*fact(a-1);
}
void main(){
int num;
clrscr();
printf("enter number to find out factorial--- ");
scanf("%d",&num);
printf("\n\tfactorial of the number is-- %d",fact(num));
getch();
}