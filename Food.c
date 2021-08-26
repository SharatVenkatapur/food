#include<stdio.h>
main()
{
	printf("pick your food : \n1. Pizza\n2. Burger\n.3 Pasta\n.4 French Fries\n.5 Sand Witch");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item-Pizza\n");
			printf("Price-Rs 239");
			break;
		case 2:
		  printf("Food item-Burger\n");
			printf("Price-Rs 129");	
			break;
		case 3:
		  printf("Food item-Pasta\n");
		  printf("Price-Rs 179");
		    break;
		case 4:
			printf("Food item-French Frie\n");
			printf("Price-Rs 99");
			break;
		case 5:
		  printf("Food item-Sand Witch\n");
			printf("Price-Rs 149");	
			break;
			
			default: printf("Invalid choice");	
			 
	}
	
}
© 2021 GitHub, Inc.
