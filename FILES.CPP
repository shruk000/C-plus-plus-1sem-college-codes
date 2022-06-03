#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 clrscr();
 char string[20],ch[2];
/*
 ofstream cool;
 cool.open("cool.txt",ios::out);
 cout<<"Enter the string.....\n";
 gets(string);
 cool<<string;
 cool.close();    */
int i=0;
 ifstream cool;
 cool.open("cool.txt",ios::in);
 cout<<"The string is .....\n";
 while(i<5)
{
 cool.getline(ch,2,'.');
 cout<<ch;
 i++;
}
 cool.close();
getch();
}

