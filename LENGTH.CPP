#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
clrscr();
char s[20];

cout<<"Enter the string ";
gets(s);

int len=strlen(s);

for(int i=0;s[i]!='\0';i++);

cout<<"Length of string using string function :"<<len;
cout<<endl<<"Length of string using for loop :"<<i;

getch();
}
