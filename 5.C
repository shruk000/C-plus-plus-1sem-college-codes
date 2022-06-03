/* C assingment
    made by--shahrukh
    roll--2017UBT1029  */


#include<conio.h>
#include<stdio.h>
void main()
{ int temp,i,num1,num2,dig;
printf("---------------program for febonacci series-------------" );
printf("\nenter first number\t");
scanf("%d",&num1);
printf("\nenter second number\t");
scanf("%d",&num2);
printf("\nenter number of digits\t");
scanf("%d",&dig);
printf("\n%d\n%d\n|\n|",num1,num2);
for(i=1;i<=dig;i++)
{printf("\n%d",num1+num2);
 temp=num1+num2;
 num1=num2;
 num2=temp;}
getch();
}

