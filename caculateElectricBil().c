/*
name:Wanjiru Julius Irungu
reg No:CT101/G/26489/25
date:21/10/2025
description:Electric bill caculator
*/
#include <stdio.h>//header file

float total_bill(float units);//prototype

int main() //main function
   {
    float result, units;
    printf("enter number of units consumed: ");
    scanf("%f", &units);//prompt user to enter units

    if (units <= 0) //condition for invalid input
	{
        printf("Invalid input: Units consumed must be greater than 0.\n");
        return 1; 
    }

    result = total_bill(units);
    printf("Your total Electric bill is %f\n\n", result);
    return 0; // Indicate successful execution
}

float total_bill(float units)//user function
 {
    float bill;
    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } else { 
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    return bill;
}