#include<stdio.h>
#include<conio.h>
void main()
{
       int a[10],i,sum=0;
       clrscr();

       for(i=0;i<10;i++)
       {
	   printf("\nEnter Array[%d] Elements:",i);
	   scanf("%d",&a[i]);
	  sum=sum+a[i];

       }
       for(i=0;i<10;i++)
       {
       printf("A[%d]:%d\n",i,a[i]);
       }

       printf("\nSum:%d",sum);
       getch();
}
