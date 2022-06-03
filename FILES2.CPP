#include<stdio.h>
#include<iomanip.h>
#include<conio.h>
#include<fstream.h>

class files
{
 int *marks;
 char name[20];

public:
  void getdata();
  void putdata();
};

void files::getdata()
 {
   cout<<"Enter the details of the Student :\n";
   cout<<"Enter the name :";
   gets(name);
   cout<<"Enter marks \n";

   for(int i=0;i<3;i++)
    {
      cout<<setw(10)<<"Subject ["<<i+1<<"]  :";
      cin>>*(marks+i);
    }
  }
void files::putdata()
 {
   cout<<"The details of the Student are:\n";
   cout<<"Name :";
   puts(name);
   cout<<"Marks in \n";

   for(int i=0;i<3;i++)
    {
      cout<<setw(10)<<"Subject ["<<i+1<<"]  :";
      cout<<*(marks+i)<<"\n";
    }
  }


void main()
{
 clrscr();
 files s;

 ofstream fout;
 fout.open("Sarfaraz.dat",ios::out);

 s.getdata();
 fout.write((char*)&s, sizeof(s));

 fout.close();

 ifstream fin;

 fin.open("Sarfaraz.dat",ios::in|ios::binary);
 fin.read((char*)&s,sizeof(s));
 s.putdata();
 fin.close();

 getch();
}