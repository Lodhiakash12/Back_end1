#include<stdio.h>
#include<conio.h>

int fact(int n);


void main()
{
	int n,result;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	result=fact(n);
	printf("Result:%d",result);
	getch();


}

int fact(int n)
{
 if(n<=1)
 {
	return 1;
 }
 else
 {
	return n *fact(n-1);
} }

