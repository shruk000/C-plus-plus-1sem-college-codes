#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

void main()
{
clrscr();
int upper=0,lower=0,digit=0;
char sr[50];
cout<<"Enter any String max(50) .....\n\n";
gets(sr);

for(int i=0;sr[i]!='\0';i++)
{
 if(isupper(sr[i]))
  upper++;
 else
 if(islower(sr[i]))
  lower++;
 else
 if(isdigit(sr[i]))
  digit++;
}
cout<<"\n\nNo. of \n";
cout<<"\t Upper case alphabets :"<<upper<<endl;
cout<<"\t Lower case alphabets :"<<lower<<endl;
cout<<"\t Digits :"<<digit<<endl;
getch();
}