#include<stdio.h>
#include<conio.h>

struct Student
{
	int rollno,s1,s2,total;
	char name[50];
	double per;
};
void main()
{
	struct Student s[3];
	int i;
	clrscr();

    for(i=0;i<3;i++)
    {
	fflush(stdin);
	printf("Enter The Name Of Student:");
	gets(s[i].name);
	printf("ENter Roll no:\n");
	scanf("%d",&s[i].rollno);
	printf("ENter S1:\n");
	scanf("%d",&s[i].s1);
	printf("ENter S2:\n");
	scanf("%d",&s[i].s2);
	s[i].total=s[i].s1+s[i].s2;
	s[i].per=s[i].total/2;
	printf("Name:%s\n",s[i].name);
	printf("Roll NO:%d\n",s[i].rollno);
	printf("Total:%d\n",s[i].total);
	printf("Per:%lf\n",s[i].per);
    }


	getch();
}
