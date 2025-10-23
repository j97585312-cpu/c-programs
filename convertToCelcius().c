/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:converting temperature from fahrenheit
date:23/10/2025
*/
#include <stdio.h>


float result(float F);//Function prototype
int main()
{
	float F,C;
	printf("enter number of fahrenheit you wish to be converted to celcius:");
	scanf("%f",&F);//prompt user to enter fahrenheit
	
    C = result(F);
	
	printf("if input is  %.2f°F then output is %.2f°C \n\n",F,C);
	
	return 0;//successful excucution
}
//function
float result(float F){
	float C;
C = (F - 32)*5/9;

return C;

	
}