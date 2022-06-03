#include<iostream.h>
#include<process.h>
#include<conio.h>

struct stack
{
 int info;
 stack *next;
}*top,*newptr,*save,*ptr;

stack* create_new_node(int);
void display(stack*);
void push(stack*);
void pop();

void main()
{
 clrscr();
 int info;
 char ch='y';

 while(1)
 {
  cout<<"\n\nEnter what you would like to do..\n";
  cout<<"1.Push into stack\n";
  cout<<"4.Pop from the stack\n";
  cout<<"2.Show the stack\n";
  cout<<"3.Exit....  ";
 cin>>ch;
switch(ch)
 {
  case '1':{ cout<<"\n\nEnter the Elements to be inserted..";
	     cin>>info;

	     newptr=create_new_node(info);
	     push(newptr); }
	   break;
  case '4':  pop();
	   break;
  case '2':  display(newptr);
	   break;
  case '3':exit(0);
 }
}
getch();
}

stack* create_new_node(int info)
 {
  ptr=new stack;
  ptr->info=info;
  ptr->next=NULL;
  return ptr;
 }

void push(stack* np)
 {
  if(np==NULL)
     top=np;
  else
  {
   save=top;
   top=np;
   np->next=top;
  }
 }

void pop()
 {
  if(top==NULL)
   cout<<"Stack empty..";
  else
   top=top->next;
 }

void display(stack* np)
 {
  while(!np==NULL)
   {
    cout<<"  "<<np->info<<"->";
    np=np->next;
   }
  cout<<"   !!!!!\n";
 }