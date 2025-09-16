#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	int x;
	clrscr();
	printf("\nEnter S1:");
	gets(s1);
	printf("\nEnter S2:");
	gets(s1);
	x=strcmp(s1,s2);
	printf("%d",x);
	if(x==0)
	{
		printf("\nEqual");
	}
	else
	{
		printf("\nNot A Palindrome");
	}
	getch();
}

