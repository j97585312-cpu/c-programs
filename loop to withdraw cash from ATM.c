/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:ATM withdrawal
date:9/10/2025
*/#include <stdio.h>
int main()
{
	float balance,withdrawal;
	printf ("enter existing account balance:");
	scanf ("%f",&balance);
	
	while (balance>0){
		printf ("enter ammount to be withdrawn:");
		scanf ("%f",&withdrawal);
		
		balance=balance-withdrawal;
		printf ("New balance is .2f \n",balance);
		
		if (balance==0)
		{
			printf("your balance is 0  \n")
			break;
	       }else if{
			(balance <0);
			printf("you have insuficient funds, your balance is %.2f\n",balance)
			break;
		}
	
	}
return 0;
	
}