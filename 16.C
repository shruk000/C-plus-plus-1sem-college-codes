#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct linkeD
			{
			  int num;
			   struct linkeD *next;
			};
typedef struct linkeD node;
void create(node *);
void display(node *);
void insert(int,int,node *);
void delllt(node*,int);
node* Finsert(node*,int);
void searchh(node *,int);

void main()
{  node *head;
	int element,pos;
	char ch,cha,chaa;
   clrscr();
   head=malloc(sizeof(node));
   create(head);
   printf("\n\t\t--you created the following list--\n");
   display(head);
   do
{  printf("\n\t+++-Select one OF the Following-+++");
   printf(" \n '-a- ' To insert an element");
   printf("\n  '-b- ' To delete an element");
   printf("\n  '-c-' To search for a perticular element");
   fflush(stdin);
   scanf("%c",&cha);
   clrscr();
	switch(cha)
		{ case 'a': do
					{ clrscr();
					printf(" enter element u want to insert in th list ");
						 scanf("%d",&element);
						display(head);
					 printf("\n\t At which position should your number appear ");
					 scanf("%d",&pos);
					if(pos==1)
					{head=Finsert(head,element);
					 }else
					 insert(element,pos,head);
					 display(head);
					fflush(stdin);
					printf("\n\t do you still want to add\n\t -----y---Y--- for yes\n --\tDefault no--  ");
					 scanf("%c",&ch);
					}while(ch=='y'||ch=='Y');
				  printf("\n\tDo you want to continue to intital menu");
				  scanf(" %c",&chaa);
				  break;
	case 'b':    clrscr();
				display(head);
			   printf("enter the number u want to delete");
				 scanf("%d",&element);
				delllt(head,element);
				 display(head);
				 printf("\n\tDo you want to continue to initial menu");
				  scanf(" %c",&chaa);
				  break;

	case 'c': clrscr();
			  display(head);
			  printf("enter the number u want to search");
			  scanf("%d",&element);
			  searchh(head,element);
			  printf("\n\tDo you want to continue to initial menu");
				  scanf(" %c",&chaa);
				  break;
	default :   printf("\n\tDo you want to continue to inital menu");
				  scanf(" %c",&chaa);
}}while(chaa=='y'||chaa=='Y');
			//free all the bytes

   free(head);
   getch();
   }

node* Finsert(node *head,int ele)
{ node *Head;
  Head=(node*)malloc(sizeof(node*));
  Head->num=ele;
  Head->next=head;
  return Head;
}
void insert(int ele,int pos,node *head)
{ node *temp,*p;
  int i;
  temp=(node*)malloc(sizeof (node));
  temp->num=ele;
  // by deafult local variable [i] scope comes first
  for(i=1;i<pos-1;i++,head=head->next);
  //reached the position for insertion
  p=head->next;
  head->next=temp;
  temp->next=p;

  }
void create(node * head)
{ node *p;
  static int i=0;
  i++;
  p=(node*)malloc(sizeof (node));
  printf("999----for exit \n\tenter %d element",i);
  scanf("%d",&(head->num));
  if((head->num)==999)
  {head->next=NULL;
	return;
	}
   (head->next)=&(p->num);
	create(p);
}

void display(node *head)
{  int i=0;  // till pointer reach to null pointer
   while(head!=NULL)
   { printf("%d->",*(head));
	  head=head->next;
   i++;
   }
  printf("\n\t---total number of elements--- ===%d",i);
  }
void delllt(node *head , int ele)
{
   while(head!=NULL)
   { if(head->next->num==ele)
		 {
		 head->next=head->next->next;
		 }
	head=head->next;
   }
}
void searchh(node *head,int ele)
{ int i=0;
  while(head->num!=ele)
  { head=head->next;
	i++;
	}
	printf("element %d found at %d postion",ele,i+1);
}











