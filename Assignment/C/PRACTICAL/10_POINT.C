#include<stdio.h>
#include<conio.h>

void main()
{
	int a=7;
	int *ptr=&a;
	clrscr();
	printf("The adrres of A:%p\n",ptr);
	printf("The Value of A:%d",*ptr);
	getch();
}
