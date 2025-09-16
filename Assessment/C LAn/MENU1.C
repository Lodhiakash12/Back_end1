#include<stdio.h>
#include<conio.h>
void main()
{
	int x,choice,y,z,more,total=0;
	clrscr();
	
	do{
		printf("Menu:\n");
		printf("1.Pizza      Price:180rs/pcs\n");
		printf("2.Burger     Price:120rs/pcs\n");
		printf("3.Dosa       Price:100rs/pcs\n");
		printf("4.Idli       Price:80rs/pcs\n");
		printf("\nEnter Your Choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("\nYou Have Selected Pizza\n");
			z=180;
			break;
			case 2:
			printf("You Have Selected Burger\n");
			z=120;
			break;
			case 3:
			printf("You Have Selected Dosa\n");
			z=100;
			break;
			case 4:
			printf("You Have Selected Idli\n");
			z=80;
			break;
			default:
			printf("Invalid Choice\n");
			z=0;
			break;
		}
		
		if(z>0){
			printf("Enter The Quantity:");
			scanf("%d",&x);
			y=z*x;
			printf("Amount:%d\n",y);
			total=total+y;
		}
		
		printf("Do You Want To Order More (1=Yes/0=No):");
		scanf("%d",&more);
		
	}while(more==1 ? 1 : 0);
	
	printf("\nTotal Amount:%d\n",total);
	printf("Thank You!");
	getch();
}