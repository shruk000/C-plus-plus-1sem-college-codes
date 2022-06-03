#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void feb(int a,int b,int c)
{
 p("\n%d",a+b);
 c--;
 if(c!=0)
 feb(b,a+b,c);
 }
void main()
{             int num1,num2,dig;
clrscr();
p("first number");
s("%d",&num1);
p("second number");
s("%d",&num2);
p("number of terms to which No should be printed excluding intials");
s("%d",&dig);
p("\n%d\n%d\n|\n|",num1,num2);
feb(num1,num2,dig);
getch();
}
