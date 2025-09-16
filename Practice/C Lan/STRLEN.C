#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50];
	int x,i,count=0;
	clrscr();
	printf("\nENter S1:");
	gets(s1);
       //	x= strlen(s1);
       for(i=0;s1[i]!='\0';i++)
       {
		count++;
       }
	  printf("%d",count);
	getch();
}