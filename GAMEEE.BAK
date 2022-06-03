#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
  void bl_ank(int num);
void whi_te(int x,int y);
void posi(int (*pos)[3],int *p);
int status (int (*pos)[3]);
void plusGen(void)
{ int i,j;
 for(i=0;i<15;i++)
 for(j=0;j<80;j++)
{if((j==58||j==68)&&i>1)
 printf("|");
 else
  if((i==6||i==10)&&j>48)
  printf("_");
 else printf(" ");

}}
void cornate(void)
{ int x,y,i,j;
   // for goto function origin is (1,1)
  // never put 0 in goto function else it will wirte on last cursor position
//collum
   gotoxy(53,2);   printf("1");
  gotoxy(63,2);   printf("2");
  gotoxy(73,2);  printf("3");

//row
  gotoxy(46,5);  printf("1");
 gotoxy(46,9);  printf("2");
 gotoxy(46,13);  printf("3");
//cordinates

  gotoxy(53,7);  printf("1,1");
 gotoxy(63,7);  printf("1,2");
 gotoxy(73,7);  printf("1,3");
 gotoxy(53,11);  printf("2,1");
 gotoxy(63,11);  printf("2,2");
 gotoxy(73,11);  printf("2,3");
  gotoxy(53,15); printf("3,1");
  gotoxy(63,15); printf("3,2");
  gotoxy(73,15); printf("3,3");

}
void zero(int x,int y)
{ gotoxy(x-1,y);
printf("/-\\");
gotoxy(x-1,y+1);
printf("\\_/");
}
void cross(int x,int y)
{ gotoxy(x-1,y);
printf("\\_/");
gotoxy(x-1,y+1);
printf("/ \\");
}

void main()
{ int *p,*q,sum=0;
  int pos[3][3]={0,0,0,0,0,0,0,0,0};
int i,j,k,l,x,y;
 int sval;
  time_t T;
clrscr();
plusGen();
cornate();

  sval=time(&T);
  srand(sval);
  p=malloc(6);
  for(i=0;i<3;i++)
  *(p+i)=(rand())%9;
//any position star
  posi(pos,p);
  q=(int*)pos;
do
{
		repeat:
	gotoxy(1,18);

	printf("enter ur X coordinate ");
	scanf("%d",&x);
	printf("\n-------to re-enter this give input greter then 3 in Y");
	printf("\nenter ur Y coordinate ");
	scanf("%d",&y);
	if(y>3||x>3)
	goto repeat;
	zero(44+10*y,1+4*x);
	pos[x-1][y-1]=10;
	if(status(pos))
		{  bl_ank(status(pos));
		    getch();

		    clrscr();
		     gotoxy(38,12);
		    printf("YOU win");
		 getch();
		 exit(0);
		}
   posi(pos,p);
	if(status(pos))
	  {         bl_ank(status(pos));

			getch();
			clrscr();
			gotoxy(38,12);
			printf("CPU win");
			getch();
			exit(0);}
	sum=0;
	for(i=0;i<9;i++)
	sum=sum+*(q+i);
	 }while(sum!=9);

 //	 gotoxy(10,20);
 /*	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
		printf("%d %d\t",*(*(pos+i)+j),*(p+j));
		printf("\n");
	}
 */		getch();
  }
void posi(int (*pos)[3],int *p)
{ int k;
 int flag;
   int *poss;
   label:
  for(k=0;k<3;k++)
{ flag=0;
   poss=(int*)(pos+k);
    if((*(p+k)==1||*(p+k)==4||*(p+k)==7)&&((*(poss+0)-1)&&(*(poss+0)-10)))
    {cross(54,5+k*4);
     *(p+k)=*(p+k)+1;
     *(poss+0)=flag=1;
     break;
     }else
     if((*(p+k)==2||*(p+k)==5)&&((*(poss+1)-1)&&(*(poss+1)-10)))
     { cross(64,5+k*4);
      *(p+k)=*(p+k)+1;
      *(poss+1)=flag=1;
       break;
       }else
     if((*(p+k)==3||*(p+k)==6||*(p+k)==0)&&((*(poss+2)-1)&&(*(poss+2)-10)))
     {cross(74,5+k*4);
      *(p+k)=*(p+k)+1;
      *(poss+2)=flag=1;
      break;
      }
}
   if(flag==0)
 { for(k=0;k<3;k++)
  {*(p+k)=(*(p+k)+11)%4;
   }
 goto label;
 }
 }

int status (int (*pos)[3])
 {  int i,j,*poss,p[3][3],temp,TEMP;
     for(i=0;i<3;i++)
    {  poss=(int*)(pos+i);
      for (j=0;j<3;j++)
       p[i][j]=*(poss+j);
    }
  if(p[1][1]==1||p[1][1]==10)
 { if(p[0][0]==p[1][1]&&p[1][1]==p[2][2])
  return 2;
  if(p[0][2]==p[1][1]&&p[1][1]==p[2][0])
  return 3;
 }
  for(i=0;i<3;i++)
 {temp=0;TEMP=0;
  for(j=0;j<3;j++)
  { temp=p[i][j]+temp;
    TEMP=p[j][i]+TEMP;
   if(temp==3||temp==30)
    return 4+i;
   if(TEMP==3||TEMP==30)
    return 7+i;
   }
  }
 return 0;
}
  void bl_ank(int num)
{  int i,j;
   for(i=0;i<3;i++)
   for(j=0;j<3;j++)
  {  if(num==2)
     if(i==j)
      continue;
     if(num==3)
      if((i+j)==2)
       continue;
      if(num==4+i)
      continue;
      if(num==7+i)
      continue;
     whi_te(54+10*i,5+4*j);
    }
}




void whi_te(int x,int y)
{ gotoxy(x-1,y);
printf("   ");
gotoxy(x-1,y+1);
printf("   ");
}















