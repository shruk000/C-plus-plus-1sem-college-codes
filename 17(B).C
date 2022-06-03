#include<stdio.h>
#include<conio.h>
void main()
{ FILE *fp;
  char ch;
  clrscr();
  fp=fopen("abcd.txt","r");
  while(1)
  { ch=getc(fp);
	if(ch==EOF)
	break;
	printf("%c",ch);
	}
	printf("\n");
	fclose(fp);
	getch();
	}