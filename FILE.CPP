#include<fstream.h>
#include<conio.h>

void main()
{
 clrscr();
 int A[5];
 int *ad;

 ofstream fout;
 fout.open("Sarfaraz.dat",ios::out);

 cout<<"Enter the no ";
 for(int i=0;i<5;i++)
  {
    cin>>A[i];
  }
 ad=A;
 fout<<*A<<endl;
 fout<<ad;
 cout<<"Address of A "<<ad;
 fout.close();

 getch();
}