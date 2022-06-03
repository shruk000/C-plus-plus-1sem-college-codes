#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int ch,a,b,c;
cout<<"\t Calculator \n\n";
cout<<"  To ADD (press 1)\n";
cout<<"  To SUBTRACT (press 2)\n";
cout<<"  To MULTIPLY (press 3)\n";
cout<<"  To DIVIDE (press 4)\n\n";
cin>>ch;

cout<<"Enter First integer :";
cin>>a;
cout<<"Entet Second integer :";
cin>>b;
switch(ch)
{
 case 1 :
  { c=a+b;
   break;
  }
 case 2 :
  { c=a-b;
   break;
  }
 case 3 :
  { c=a*b;
   break;
  }
 case 4 :
  { c=a/b;
   break;
  }
 default:
  break;
}
cout<<"Answer is : "<<c;
getch();
}