#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],s3[50];
	clrscr();
	printf("\nENter S1:");
	gets(s1);
	printf("\nENter S2:");
	gets(s2);
	strcat(s2,s1);
	printf("Fullname:%s",s2);
	strrev(s2);
	strcpy(s3,s1);
	printf("\nreversed: %s",s2);
	printf("\ns3:%s",s3);
	getch();
}
