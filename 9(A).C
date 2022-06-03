/* C assingment
    made by--shahrukh
    roll--2017UBT1029  */

#include<conio.h>
#include<stdio.h>
void main(){
  char *a,string1[]="helloworld",string2[20];
  int i=0;
  clrscr();
  a=string1;
  while(*a!='\0')
  { string2[i]=*a;
	i++;
	a++;
	}
  string2[i]='\0';
puts(string2);
puts(string1);
getch();
}