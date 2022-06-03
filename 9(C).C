/* C assingment
    made by--shahrukh
    roll--2017UBT1029  */

#include<conio.h>
#include<stdio.h>
void main()
{ char a,b,str[]="Hello-World";
  int i;
  for(i=0;str[i]!='\0';i++)
   if(str[i]>='a'&&str[i]<='z')
	   {a=str[i];
	   b=a-'a';
	   str[i]='A'+b;
	   }
printf("%s",str);
getch();
}