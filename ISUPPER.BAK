#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

void main()
{
clrscr();
char string[50];
cout<<"Enter any string .....\n\n";
gets(string);

for(int i=0;string[i]!='\0';i++)
{
 if(isupper(string[i]))
  string[i]='#';
 else
 if(islower(string[i]))
 string[i]='*';
 else
 if(isdigit(string[i]))
 string[i]='$';
}
cout<<"The new string is :\n";
puts(string);
getch();
}