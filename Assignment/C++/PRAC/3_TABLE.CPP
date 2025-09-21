#include<iostream.h>
#include<conio.h>

void main()
{
	int num,i,mul;
	clrscr();
	cout<<"Choose No:";
	cin>>num;
	for(i=1;i<11;i++)
	{
		mul=num*i;
		cout<<num<<"*"<<i<<"="<<mul<<"\n";
	}
	getch();
}
