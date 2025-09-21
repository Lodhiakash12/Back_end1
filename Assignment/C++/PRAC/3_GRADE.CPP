#include<iostream.h>
#include<conio.h>

void main()
{
	char name[20];
	int i,n,s1,s2,s3,total,per;
	clrscr();
	cout<<"\nENter No OF Students:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter NAme:";
		cin>>name;
		cout<<"\nEnter s1:";
		cin>>s1;
		cout<<"\nENter S2:";
		cin>>s2;
		cout<<"\nENter s3;";
		cin>>s3;
		total=s1+s2+s3;
		cout<<"\nTotal:"<<total;
		per=total/3;
		cout<<"\nPer:"<<per;
		if(per>33)
		{
			cout<<"\nPass";
		}
		else
		{
			cout<<"\nFail";
		}
	}
	getch();
}


