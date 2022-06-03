#include<iostream.h>
#include<conio.h>

void factor(int num[],int s)
{
 int j,A[10];

 for(int k=0;k<s;k++)
 {
  j=0;
  label:
  for(int i=2;i<num[k]/2;i++)
  {
   if(num[k]%i==0)
    {
     num[k]=num[k]/i;
     A[j]=i;
     j++;
     goto label;
    }
  }
  cout<<"The Factors of "<<k+1<<" no. is/are ";
  for(i=0;i<j;i++)
   {
    cout<<" "<<A[i]<<" ";
   }
  cout<<" "<<num[k]<<endl<<endl;
 }
}

void main()
{
 clrscr();
 int A[5];
 int res,no,s;
 cout<<"How many no you want to enter(max 5) :";
 cin>>s;
 for(int i=0;i<s;i++)
 {
  cout<<"Enter the "<<i+1<<" no. :";
  cin>>A[i];
 }

 factor(A,s);
 getch();
}