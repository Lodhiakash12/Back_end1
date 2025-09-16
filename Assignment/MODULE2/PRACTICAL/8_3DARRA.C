#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5][5],i,j,sum=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("\nEnter %d row %d col:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{                                 

		for(j=0;j<5;j++)
		{
			printf("\n A[%d] row A[%d] col:%d\n",i,j,a[i][j]);

			sum=sum+a[i][j];

		}
	}
	printf("Sum:%d",sum);


	getch();
}
