/*
name:Wanjiru Julius Irungu
reg No:CT101/G/26489/25
description:Bank qualification
*/
#include<stdio.h>
int main()
{
int age,annual_income;

//prompt user to enter age	
printf("enter age:")	;
scanf("%d",&age);

//prompt user to enter annual income
printf("enter annual income:");
scanf("%d",&annual_income);

//check if customer qulifies
if (age >=21 && annual_income >=21000){
printf("congratulations,you qualify for a loan\n");
}else{
printf("unfortunately,we are unable to offer you a loan at this time");}
	return 0;
	//program executed successfully
}
