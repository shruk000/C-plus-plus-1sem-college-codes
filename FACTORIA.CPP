//Printing Factorial of No.
#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int A;
float fac=1;
cout<<"Enter the no. :";
cin>>A;
for(int i=1;i<=A;i++)
 {
  fac=fac*i;
  }
cout<<"Factorial of no. "<<A<<" :";
cout<<fac;
getch();
}