#include<stdio.h>
#include<conio.h>
struct linkedList{
			int info;
		   struct linkedList *next;
		   };
typedef struct linkedList node;
void insert(node*head,node*start)
{ node*p;
printf("enter elements ------999 for exit");
scanf("%d",&(head->info));
if(head->info==999)
 {head->next=&(start->info);
  return;  }
p=malloc(sizeof(node));
head->next=&(p->info);
insert(p,start);
}
void display(node*head,node*start)
{ printf("%d->",head->info);
  head=head->next;
  if(head->info==start->info)
  {return;}
  display(head,start);
}


void main()
{  node*head;
  insert(head,head);
  display(head,head);
 getch();



}
