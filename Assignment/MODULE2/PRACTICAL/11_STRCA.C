#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

	char s1[50],s2[50];
	int x,y;
	clrscr();
	printf("\nEnter S1:");
	gets(s1);
	printf("\nEnter S2:");
	gets(s2);
	strcat(s2,s1);
	printf("%s\n",s2);
	y=strlen(s2);
	printf("%d\n",y);


	getch();
}

