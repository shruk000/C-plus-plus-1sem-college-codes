#include<stdio.h>
#include<iomanip.h>
#include<conio.h>
#include<fstream.h>

class files
{
 int marks[3];
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
      cin>>marks[i];
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
      cout<<marks[i]<<"\n";
    }
  }


void main()
{
 clrscr();
 files s;
 cout<<"What would you like to do..";
 cout<<"1.Insert a record\n";
 cout<<"2.Show a record\n";
 cout<<"3.Modify a record\n";
 cout<<"4.Exit.. ";
 cin>>ch;

ofstream fout;
fout.open("Sarfaraz.txt",ios::out);

switch(ch)
{
 case '1': {
	    cout<<"How many student's data you want to enter (max 3)..";
	    cin>>N;
	    for(int i=0;i<N;i++)
	     {
	      cout<<"Enter the details of the "<<i+1<<"Student..";
	      s.getdata();
	      fout.write((char*)&s, sizeof(s));
	      fout.close();
	     }
	   }
 break;

 case '2': {
	    ifstream fin;
	    fin.open("Sarfaraz.txt",ios::in|ios::binary);
	    fin.read((char*)&s,sizeof(s));
	    s.putdata();
	    fin.close();
	   }


 getch();
}