#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();

 int N,NO,sum=0;
 int a=0;

 cout<<"Enter any no max(10) digit :";
 cin>>NO;
 N=NO;

 do
 {
  a=N%10;
  sum=sum+a;
  N=N/10;
 }while(N>0);

 cout<<"SUM of the digits of the no "<<NO<<"  is  :"<<sum;

 getch();
}

