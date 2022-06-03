#include<iostream.h>
#include<conio.h>

class factor
{
 int A[10];
 int j;
public:
 factor()
 {j=0;}
 void fac(int);
 int jj()
  {
   return j;
  }

 int *ga()
  {
   return A;
  }
};

void factor::fac(int a)
 {
  label:
  for(int i=2;i<a/2;i++)
    {
      if(a%i==0)
       {
	 A[j]=i;
	 a=a/i;
	 j++;
	 goto label;
       }
    }
   cout<<"The Factors of no. is/are ";
   for(i=0;i<j;i++)
    {
     cout<<" "<<A[i]<<" ";
    }
   cout<<a<<endl<<endl;
 }

void main()
{
 int *ga();
 clrscr();
 int s;

 factor f[3];
 cout<<"How many no you want to enter(max 5) :";
 cin>>s;
 int a;
 for(int i=0;i<s;i++)
 {
  cout<<"Enter the "<<i+1<<" no. :";
  cin>>a;
  f[i].fac(a);
 }
 int pos[5];
int b;
b=f[0].jj()+1;
a=f[1].jj()+1;
cout<<"a= "<<a<<"   b= "<<b;
/* for(i=1;i<s;i++)
 {
  if(f[i].jj()<a)
   {
     a=f[i].jj();
   }                                      //printing H.C.F
 }
*/
int l=0;

   for(i=1,j=1;i<=b+1,j<s;j++,i++)
    {
      for(int k=0;k<a;k++)
	if( (*(f[0].ga()+(i-1)))==(*(f[j].ga()+k)) )
	 {
	  pos[l]=(*(f[i].ga()+k));
	  *(f[0].ga()+(i-1))=(*(f[j].ga()+k))=0;
	  l++;

	 }
    cout<<"k= "<<k-1<<"    ";
    }
 cout<<"i= "<<i-1<<endl;
 cout<<"H.C.F of the given no.s is ... ";
 int noo=0;
 for(i=0;i<l;i++)
  {
    pos[i]*=pos[i];
    noo=pos[i];
  }
 cout<<noo;

// cout<<endl<<f[0].jj()<<"  "<<f[1].jj();

getch();
}