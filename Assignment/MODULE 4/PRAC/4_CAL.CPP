#include<iostream.h>
#include<conio.h>

void add(int a,int b)
{
	cout<<"sum:"<<a+b;
}
void sub(int a,int b)
{
	cout<<"Sub:"<<a-b;
}
void div(int a,int b)
{
	cout<<"Div:"<<a/b;
}
void mul(int a,int b)
{
	cout<<"Mul:"<<a*b;
}

void main()
{
	int a,b,choice;
	clrscr();
	cout<<"1.Add\n1.Sub\n3.Mul\n4.Div\nEnter Choice:";
	cin>>choice;
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;

	switch(choice)
	{
		case 1:
		add(a,b);
		break;

		case 2:
		sub(a,b);
		break;

		case 3:
		mul(a,b);
		break;

		case 4:
		div(a,b);
		break;
	}
	getch();
}

