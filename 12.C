/* C assingment
    made by--shahrukh
    roll--2017UBT1029  */


#include<stdio.h>
#include<conio.h>

int add(int, int);
int sub(int, int);
long int mul(int, int);
float div(int, int);

void main(){
int num1, num2, choice;
char ch;
clrscr();
do
{
printf("[0] Exit\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide");
scanf("%d", &choice);

switch(choice){
	case 0:
		break;
	case 1:
		printf("Enter 1st number:\n");
		scanf("%d", &num1);
		printf("Enter 2nd number:\n");
		scanf("%d", &num2);
		printf("%d", add(num1,num2));
		break;
	case 2:
		printf("Enter 1st number:\n");
		scanf("%d", &num1);
		printf("Enter 2nd number:\n");
		scanf("%d", &num2);
		printf("%d ", sub(num1,num2));
		break;
	case 3:
		printf("Enter 1st number:\n");
		scanf("%d", &num1);
		printf("Enter 2nd number:\n");
		scanf("%d", &num2);
		printf("%u", mul(num1,num2));
		break;
	case 4:
		printf("Enter 1st number:\n");
		scanf("%d", &num1);
		printf("Enter 2nd number:\n");
		scanf("%d", &num2);
		printf("%f", div(num1,num2));
		break;
	default:
		printf("That is not a valid choice.");
		break;
}printf("\nreuse calculator\n\t\t----y---Y-- for yes\n\t default NO");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
}
	//Addition
int add(int x,int y){
	int z = x + y;
	return z;
}
//Subtraction
int sub(int a,int b){
	int c = a - b;
	return  c;
}
//Multiplication
long int mul(int d,int e){
   long	int f = d * e;
	return f;
	}
//Division
float div(int g,int h){
	float i = g / h;
	return i;
}
