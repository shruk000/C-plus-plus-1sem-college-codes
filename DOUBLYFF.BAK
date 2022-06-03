#include<conio.h>
#include<stdio.h>
struct linkedList{
			int num;
			struct linkedList *prev,*next;
		};
typedef struct linkedList node;
void sort(node*);
void create(node *head)
{ static int i;
  node *temp;
  printf("enter the number--------9999 for exit");
  scanf("%d",&(head->num));
  if(head->num==9999)
  { head->next=NULL;
     printf("total number of nodes are---- %d---",i+1);
     return;}
  if(i==0)
  head->prev=NULL;
 temp=malloc(6);
   i++;
  if(temp==NULL)
  printf("out of memory");
  head->next=temp;
  temp->prev=head;
  create(temp);
}
void display(node*head)
{ while(head->next!=NULL)
	{ printf("%d->",head->num);
	   head=head->next;
	 }
  printf("\nprinting it backword \n");
  while(head->prev!=NULL)
      {printf("%d<-",head->prev->num);
	head=head->prev;
      }
}

void main()
{ node* head;
  clrscr();
  create(head);
  display(head);
  sort(head);
  printf("\n\n");
  display(head);
  free(head);
  getch();
}

void sort(node*head)
{ int temp;
   node *ptr,*ltr;
   ptr=head;
   for(;ptr!=NULL;ptr=ptr->next)
   { ltr=head;
     for(;ltr->next!=NULL;ltr=ltr->next)
     {  if(ltr->num>ltr->next->num)
	{ temp=ltr->num;
	 ltr->num=ltr->next->num;
	 ltr->next->num=temp;
	}
     }
  }
}



