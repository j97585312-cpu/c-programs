/*
name:Wanjiru Jilius Irungu
reg NO:CT101/G/26489/25
description:1D array to calculate revenue
date:29/10/2025
*/
#include <stdio.h>
int main(){
	
	float revenue[7];
	float totalrevenue=0.0;
	float averagerevenue;
	int i;
	
	for (i = 0;i < 7; i++){
		printf("enter revenue for day %d:",i+1);
		scanf("%f",&revenue[i]);
		totalrevenue+=revenue[i];
	}

	averagerevenue = totalrevenue/7;
	
	printf("total weekly revenue is: %.2f\n\n",totalrevenue);
	printf("average weekly revenue is: %.2f\n",averagerevenue);
	
	return 0;
	
}