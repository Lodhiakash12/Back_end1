#include<iostream.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	cout<<"Choose Value:";
	cin>>x;
	if(x>0 && x<20)
	{
		cout<<"Hint:Lower Value:";
	}
	else if(x>20 && x<60)
	{
		cout<<"Hint:Medium Value:";
	}

	else
	{
		cout<<"Hint:Higher Value";
	}
	getch();
}