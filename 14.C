/* C assingment
    made by--shahrukh
    roll--2017UBT1029  */

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{int *p,n,i;
  char c;
  clrscr();
 printf("enter number of integers u want to insert-- not more then 9");
 scanf("%d",&n);
 p=calloc(n,sizeof(int));
 printf("start entering number\n after each just press enter");
 for(i=0;i<n;scanf("%d",p+i),printf("\n"),i++);
  printf("\nu entered following number");
 for(i=0;i<n;i++)
 {c=*(p+i)+'0';
 if(*(p+i)<=9&&*(p+i)>=0)
 printf("\nAASCI value of %d is %d",*(p+i),c);
  }
  free(p);
 getch();
 }


