/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:DATA PURCHASER
date:2/10/2025
*/
#include<stdio.h>
int main()
{
	int choice;
	
	//display choices
	printf("make your bundle\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600 KES\n");
	printf("Enter your choice (1-4);");
	
	//read user input
	scanf("%d",&choice);
	
	//display user choice
	switch (choice){
		case 1:
			printf("You selected 100 MB.cost 50 KES\n");
			break;
		case 2:
			printf("You selected 500 MB.cost 200 KES\n");
			break;
		case 3:
			printf("you selected 1GB.cost 350 KES\n");
			break;
		case 4:
			printf("You selected 2GB.cost 600 KES\n");
			break;
		
		// invalid choice display
		default:
			printf("invalid choice\n");
			break;
	}return 0;
			
	}
	
	

	
