#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *f;
	char s1[50],s2[50];
	clrscr();
	printf("Enter The Data;");
	gets(s1);
	f=fopen("data.txt","w");
	fprintf(f,"%s",s1);
	fclose(f);
	f=fopen("data.txt","r");
	fgets(s2,50,f);
	printf("\n Data:%s",s2);
	fclose(f);
	getch();
}