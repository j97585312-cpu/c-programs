/*
Name:wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description: Water bill caculator
date:2/10/2025
*/
#include<stdio.h>
int main()
{
	float units;
	float bill;
	
	//prompt user to enter units
	printf("enter number of water units consumed:");
	scanf("%f",&units);
	
	
	//calculation using if else statements
	if (units <= 30)
	{bill=units * 20;
	}else if (units<=60)
	{bill=(30 * 20)+(units-30)*25;
	}else if (units >60)
	{bill=(30 * 20)+(30 * 25)+(units - 60)*30;	
	}
	
	//display bill
	printf("Your bill is: %.2f",bill);
	
	return 0;
}