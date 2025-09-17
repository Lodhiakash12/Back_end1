#include<iostream.h>
#include<conio.h>

void main()
{
	int x,y,sum;
	clrscr();
	cout<<"ENter X:";
	cin>>x;
	cout<<"Enter Y:";
	cin>>y;
	sum=x+y;
	cout<<"Sum:"<<sum;
	if(x>y)
	{
		cout<<"\nX is Greater";
	}
	else
	{
		cout<<"\nY is Greater";
	}
	if(x>0 && y>0)
	{
	 cout<<"\nBoth are Positive";
	}
	else
	{
		cout<<"Error";

	}


	getch();
}