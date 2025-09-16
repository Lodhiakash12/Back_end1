#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,sum=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter A[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("A[%d]:%d\n",j,a[j]);
		sum=sum+a[j];
	}
	printf("\nSum:%d\n",sum);
	getch();
}