#include<stdio.h>
#include<conio.h>
struct linkedList {
			int info;
			struct linkedList *next,*prev;
		};
typedef struct linkedList node;

node* insert(node*head)
{ static i;
  node *p;
   printf("enter the number ------999 for exit");
   scanf("%d",&(head->info));
   if((head->info)==999)
   { head->next=NULL;
     return head;
     }
     i++;
   p=(node *)malloc(sizeof(node));
   if(i==0)
   head->prev=NULL;
   (p->prev)=&(head->info);
   (head->next)=&(p->info);
   insert(p);
}
void display(node*position,int num)
{ static int i=0;
   if(num==1)
  { i++;
  printf("%d->",position->info);
  if(position->next==NULL)
  {  printf("totaol number of elements %d",i);
    return;}
   display(position->next,num);
  }
else
 {i++;
  printf("%d->",position->info);
  if(position->prev==NULL)
  { printf("totaol number of elements %d",i);
    return;}
   display(position->prev,num);
 }
}



void main()
{ node *start,*end;
int num;
  end=insert(start);
  printf("1..show from begining\n2..show form end");
  scanf("%d",&num);
   if(num==1)
   display(start,num);
   else display(end,num);

getch();
}



