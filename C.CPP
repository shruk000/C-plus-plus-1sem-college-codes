#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>

class contact
	{
		protected:
		char number[12];
		char name[40];

		public:
		void getdata()
		{
		cout<<"\n\t\t\t Enter No. : ";
		cin>>number;
		char ch;
		cin.get(ch);
		cout<<"\n\t\t\t Enter Name : ";
		cin.getline(name,40);
		}
		void show()
		{
			cout<<"\n\t\t\t________________________________";
			cout<<"\n\t\t\t||"<<name;
			cout<<endl;
			cout<<"\n\t\t\t+91 "<<number;
			cout<<"\n\t\t\t________________________________";
			cout<<endl;
		}

		void contactlist();
	};

void showcon()
		{
		contact obj;
		cout<<"\n\t\t\t\t ||CONTAC LIST||";
		system("cls");
		fstream filin;
		contact ne;
		char ch;
		filin.open("DLIST.txt",ios::in|ios::out);
		while(!filin.eof())
		{
			filin.read((char*)&ne,sizeof(ne));
			if(filin.eof())
			break;
			ne.show();
		}
		filin.close();
		cout<<"\n\t\t\tPress B : to go back";
		cout<<"\n\t\t\t";
		cin>>ch;
		if(ch=='b'||ch=='B')
			obj.contactlist();

		}

void addcon()
		{
		system("cls");
		contact obj;
		char cc;
		int c=1;
		contact nee;
		ofstream cnl;
		cnl.open("DLIST.txt",ios::app);

		while(c!=0)
		{
		nee.getdata();
		cnl.write((char*)&nee,sizeof(nee));
		cout<<"\n\t\t\tTo add more? (y/n)";
		cout<<"\n\t\t\t\t";
		cin>>cc;
		if(cc=='n')
			c=0;
		}

		cnl.close();
		cout<<"\n\t\t\tPress B : to go back";
		cout<<"\n\t\t\t\t";
		cin>>cc;
		if(cc=='b'||cc=='B')
		obj.contactlist();
		}

class Mobile: public contact
{
public:
	void Messenger();
	void Converter();
	void Calculator();
	void sysclock();
	void MENU();
};


void contact::contactlist()
{
	Mobile obj;
	void addcon();
	void showcon();
	system("cls");
	char inp;
	cout<<"\n\t\t\tShow contact:Press S  ";
	cout<<"\n\t\t\tAdd contact: Press A  ";
	cout<<"\n\t\t\tTo exit:     Press B  ";
	cout<<"\n\n\t\t\t\t";
	cin>>inp;
	if(inp=='a'||inp=='A')
	addcon();
	else if(inp=='s'||inp=='S')
	showcon();
	else if(inp=='b'||inp=='B')
	obj.MENU();

}

void Mobile::Messenger()
{
	system("cls");
	Mobile obj;
	int num,x;
	char msg[120];
	cout<<"\n\n\t\t\t\t || MESSAGES ||";
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\tCreate Message  :(Press 1)";
	cout<<"\n\t\t\tDrafts          :(Press 2)";
	cout<<"\n\t\t\tDelete Messages :(Press 3)";
	cout<<"\n\t\t\tMain Menu       :(Press anything else)";
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\t\tEnter Your Choice ";
	cout<<"\n\t\t\t\t";
	cin>>num;
	if(num!=1&&num!=2&&num!=3)
	obj.MENU();
	switch(num)
	{
	case 1:
	{
		system("cls");
		cout<<"\n\t\t\t________________________________";
		cout<<"\n\t\t\tEnter Your Message (Max 120 characters): "<<endl;
		ofstream wr_msg("Messages.txt",ios::out|ios::app);
		cout<<"\n\t\t\t";
		gets(msg);
		wr_msg.write((char*)&msg,'\n');
		cout<<"\n\t\t\tYour Message was saved to Drafts";
		cout<<"\n\t\t\t________________________________";
		wr_msg.close();
		obj.Messenger();
		break;
	}
	case 2:
	{
		system("cls");
		cout<<"\n\t\t\t\t || SAVED MESSAGES ||"<<endl;
		cout<<"\n\t\t\t________________________________";
		ifstream re_msg("Messages.txt",ios::in);
		while(!re_msg.eof())
		{
		re_msg.getline(msg,'\n');
	cout<<"\n\t\t\t";
		puts(msg);
		cout<<endl<<endl;
		}
		cout<<"\n\t\t\tThose Are all the messages.";
		cout<<"\n\t\t\tPress any key to return to Message Menu ";
		cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\t";
		cin>>x;
		re_msg.close();
		obj.Messenger();
		break;
	}
	case 3:
	{
		system("cls");
		char ch;
		cout<<"\n\t\t\tDelete All Messages? (y/n) : ";
	cout<<"\n\t\t\t";
		cin>>ch;
		if(ch=='y'||ch=='Y')
		{
		ofstream del_msg("Messages.txt",ios::out|ios::trunc);
		del_msg.close();
		}
		cout<<"\n\t\t\tMessages Deleted";
		obj.Messenger();
		break;
	}

	}
}

void Mobile::Converter()
{
	system("cls");
	Mobile obj;
	int num;
	char msg[120];
	cout<<"\n\n\t\t\t\t || CONVERTER ||";
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\tTemperature    :(Press 1)";
	cout<<"\n\t\t\tWeight         :(Press 2)";
	cout<<"\n\t\t\tLength         :(Press 3)";
	cout<<"\n\t\t\tMain Menu      :(Press anything else)";
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\t\tEnter Your Choice";
	cout<<"\n\t\t\t";
	cin>>num;
	switch(num)
	{
	case 1:
	{
		system("cls");
	 int a;
	 float b,c;
	 cout<<"\n\t\t\t________________________________";
	 cout<<"\n\t\t\tCelsius -> Fahrenheit :(Press 1)";
	 cout<<"\n\t\t\tFahrenheit -> Celsius :(Press 2)";
	 cout<<"\n\t\t\tConverter Menu        :(Press anything else)";
	 cout<<"\n\t\t\t________________________________";
	 cout<<"\n\t\t\tEnter Your Choice : ";
	 cout<<"\n\t\t\t";
	 cin>>a;
	 cout<<endl;
	 if (a==1)
	 {
		 system("cls");
	  cout<<"\n\t\t\tCelsius = ";
	  cout<<"\n\t\t\t\t";
	  cin>>b;
	  c=1.8*b+32;
	  cout<<"\n\t\t\tFahrenheit = "<<c;
	  obj.Converter();
	 }
	 else if(a==2)
	 {
		 system("cls");
	  cout<<"\n\t\t\tFahrenheit = ";
	  cout<<"\n\t\t\t\t";
	  cin>>b;
	  c=(b-32)/1.8;
	  cout<<"\n\t\t\tCelsius = "<<c;
	  obj.Converter();
	 }
	 else
	 obj.Converter();
	 break;
	 }
	case 2:
	{
		system("cls");
	 int a;
	 float b,c;
	 cout<<"\n\t\t\t________________________________";
	 cout<<"\n\t\t\t"<<"Kilogram -> Pound :(Press 1)";
	 cout<<"\n\t\t\t"<<"Pound -> Kilogram :(Press 2)";
	 cout<<"\n\n\t\t\tConverter Menu        :(Press anything else)";
	 cout<<"\n\t\t\t________________________________";
	 cout<<"\n\t\t\t\tEnter Your Choice : ";
	 cout<<"\n\t\t\t";
	 cin>>a;
	 cout<<endl;
	 if (a==1)
	 {
	  cout<<"\n\t\t\tKilogram = ";
	  cout<<"\n\t\t\t\t";
	  cin>>b;
	  c=b*2.20462;
	  cout<<"\n\t\t\tPound = "<<c;
	  obj.Converter();
	 }
	 else if(a==2)
	 {
	  cout<<"\n\t\t\tPound = ";
	  cout<<"\n\t\t\t\t";
	  cin>>b;
	  c=b*0.453592;
	  cout<<"\n\t\t\tKilogram = "<<c;
	  obj.Converter();
	 }
	 else
	 obj.Converter();
	 break;
	}
	case 3:
	{
	system("cls");
	 int a;
	 float b,c;
	 cout<<"\n\t\t\t________________________________";
	 cout<<"\n\t\t\t"<<"Foot -> Centimeter   :(Press 1)";
	 cout<<"\n\t\t\t"<<"Centimeter -> Foot   :(Press 2)";
	 cout<<"\n\t\t\tConverter Menu           :(Press anything else)";
	 cout<<"\n\t\t\t________________________________";
	 cout<<"\n\t\t\t\tEnter Your Choice : ";
	 cout<<"\n\t\t\t";
	 cin>>a;
	 cout<<endl;
	 if (a==1)
	 {

	  cout<<"\n\t\t\tFoot = ";
	  cout<<"\n\t\t\t\t";
	  cin>>b;
	  c=b*30.48;
	  cout<<"\n\t\t\tCentimeter = "<<c;
	  obj.Converter();
	 }
	 else if(a==2)
	 {

	  cout<<"\n\t\t\tCentimeter = ";
	  cout<<"\n\t\t\t\t";
	  cin>>b;
	  c=b*0.0328084;
	  cout<<"\n\t\t\tFoot = "<<c;
	  obj.Converter();
	 }
	 else
	 obj.Converter();
	 break;
	}
	default:
	obj.MENU();
	}

}

void Mobile::Calculator()
{
	system("cls");
Mobile obj;
float a,b,c;
char o,ch;
cout<<"\t\t\t\t|| CALCULATOR ||";
cout<<"\n\t\t\tWhat would you like to do(+,-,*,/)?"<<endl;
cout<<"\n\t\t\t\t";
cin>>o;
cout<<"\n\t\t\tEnter the first integer : ";
cout<<"\n\t\t\t\t";
cin>>a;
cout<<"\n\t\t\tEnter the second integer : ";
cout<<"\n\t\t\t\t";
cin>>b;

switch(o)
 {
 case '+':
   {
	c=a+b;
	break;
   }
 case '-':
   {
	c=a-b;
	break;
   }
 case '*':
   {
	c=a*b;
	break;
   }
 case '/':
   {
	c=a/b;
	break;
   }
 }
system("cls");
cout<<"\n\n\t\t\t"<<a<<" "<<o<<" "<<b<<" = "<<c;
cout<<"\n\t\t\tAnother Calculation(y/n)? ";
cout<<"\n\t\t\t\t";
cin>>ch;
if(ch=='y'||ch=='Y')
obj.Calculator();
if(ch!='y'&&ch!='Y')
obj.MENU();
}
/*
void Mobile::sysclock(){

	Mobile obj;
	int i=10;
	char ch;
	char timebuf[32];
	long timeval;
	system("cls");
	cout<<"\n\t\t\tSET TIMER (sec) ";
	cout<<"\n\t\t\t\t";
	cin>>i;

	while(i!=0)
	{

	clrscr();

	time(&timeval);
	strftime(timebuf,32,"%a %d%b%Y %H:%M:%S",localtime(&timeval));
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\tTime is : " << timebuf << endl;
	cout<<"\n\t\t\t________________________________";
	delay(1000);
		i--;
	}
	cout<<"\n\t\t\tTo Repeat:    Press R  ";
	cout<<"\n\t\t\tTo exit:      Press B  ";
	cout<<"\n\t\t\t\t";
	cin>>ch;
	if(ch=='r'||ch=='R')
		sysclock();
	else if(ch=='b'||ch=='B')
		obj.MENU();
}
 */

void Mobile::MENU()
{
	int ch;
	Mobile obj;
	system("cls");
	cout<<"\t\t\t\t|| MENU ||";
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\tContacts   (Press 1)";
	cout<<"\n\t\t\tMessages   (Press 2)";
	cout<<"\n\t\t\tConverter  (Press 3)";
	cout<<"\n\t\t\tCalculator (Press 4)";
  //	cout<<"\n\t\t\tClock      (Press 5)";
	cout<<"\n\t\t\t________________________________";
	cout<<"\n\t\t\t\tEnter your Choice ";
	cout<<"\n\t\t\t";
	cin>>ch;
	if(ch==1)
	obj.contactlist();
	else if(ch==2)
	obj.Messenger();
	else if(ch==3)
	obj.Converter();
	else if(ch==4)
	obj.Calculator();
  //	else if (ch==5)
   //	obj.sysclock();
	else
	cout<<"\n\t\t\tInappropriate Selection.....System Shutting Down";
}


void main()
{
	clrscr();
	Mobile obj;
	obj.MENU();
	getch();
}
