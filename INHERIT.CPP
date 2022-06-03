#include<iostream.h>
#include<conio.h>

class cool
{
public:
 int a;
 void getdata()
  {
   cout<<"Enter any no. :\n";
   cin>>a;
  }
};

class derived:public cool
{
 int a;
public:
 derived()
 {
  a=1;
 }
 void showdata()
  {
   char ch;
   cout<<"Details :"<<"\n";
   cout<<"Derived one a :"<<a<<"\n";
   cout<<"Base one a :"<<cool::a;
   getch();
  }
};

void main()
{
 clrscr();
 derived d;
 d.getdata();
 d.showdata();
}
