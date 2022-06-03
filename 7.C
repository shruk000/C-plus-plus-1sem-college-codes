#include<stdio.h>
#include<conio.h>
void show(int *a,int,int);
void print(int (*a)[3],int,int);


void main(){
int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
clrscr();
show(a,4,3);
print(a,4,3);
}
void show(int *a,int l,int b)
{ int i,j;
 for(i=0;i<l;i++)
  {{for(j=0;j<b;j++)
   printf("%d-",*(a+i*b+j));
   }printf("\n");
   }
}
void print(int (*a)[3],int l,int b)
{int i,j,*p;
 for(i=0;i<l;i++)
 {p=a[i];
 for(j=0;j<b;j++)
	printf("%d--",`*(p+j));
	printf("\n");
	}

}
