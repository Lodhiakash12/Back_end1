#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
       int	temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int a=5,b=8,temp;
	clrscr();
	swap(&a,&b);
	printf("A:%d,B:%d",a,b);
	getch();
}
