#include<iostream.h>
#include<conio.h>

void main()
{
	int s1,s2,total;
	char name[20];
	clrscr();
	cout<<"Enter Name:";
	cin>>name;
	cout<<"ENter S1:";
	cin>>s1;
	cout<<"Enter S2:";
	cin>>s2;
	total=s1+s2;
	cout<<"Name:"<<name<<"\nTotal:"<<total;
	getch();
}