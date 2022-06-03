#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
int m,n,A[5][5],B[5][5],C[5][5];
int p,q;
cout<<"Enter the no of Rows and Columns in the matrix 1 \t ";
cin>>m>>n;

cout<<"Enter the no of Rows and Columns in the matrix 2 \t ";
cin>>p>>q;

if(m==n && n==p)
{
cout<<"Enter the elements in the matrix :";
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
   {
    cin>>A[i][j];
   }
 }

cout<<"Enter the elements in the matrix :";
 for(i=0;i<p;i++)
 {
  for(int j=0;j<q;j++)
   {
    cin>>B[i][j];
   }
 }

for(i=0;i<p;i++)
 {
  for(int j=0;j<q;j++)
   {
    C[i][j]=A[i][j]+B[i][j];
   }
 }

cout<<"Sum of the matrix :"<<endl;
 for(i=0;i<p;i++)
 {
  for(int j=0;j<q;j++)
   {
    cout<<"  "<<C[i][j];
   }
  cout<<endl;
 }

}
else
cout<<"Matrix can't be added :";

getch();
}
