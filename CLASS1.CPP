#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>


class cool
{
 int roll_no;
 char name[20];
 char classs[5];
 char phoneno[10];
public:
cool()
{
 strcpy(name,"Awesome");
 strcpy(classs,"XII");
}
void getdata()
{
 cout<<"Enter the details of the student ....."<<endl;
 cout<<"Enter the roll no. :";
 cin>>roll_no;
 cout<<"Enter the name :";
 gets(name);
 cout<<"Enter the class :";
 gets(classs);
 cout<<"Enter the phone no :";
 gets(phoneno);
}

void putdata()
{
 clrscr();
 cout<<"The details of the student";
 cout<<endl<<endl;
 cout<<"Roll no. :";
 cout<<roll_no;
 cout<<"Name :";
 puts(name);
 cout<<"Class :";
 puts(classs);
 cout<<"Phone no :";
 puts(phoneno);
}
}stud;

void main()
{
clrscr();
stud.getdata();
stud.putdata();
getch();
}



