/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/264389/25
description:program to caculate fare
date:22/10/2025
*/
#include <stdio.h>

float caculatefare(float fare,float kilometers);//prototype
//main function
int main(){//variable declarations
    float fare = 50;
	float kilometers;

	
	
	printf("enter distance covered in kilometers:");
	scanf("%f",&kilometers);
	
	printf("you total fare is KSH %.2f\n",caculatefare(fare,kilometers));
	
caculatefare(fare,kilometers);//i'd like to think of this as communacation between functions

return 0;	
	

}

 float caculatefare(float fare,float kilometers){
	float totalbill;
	
	totalbill = fare * kilometers;
	
	return totalbill;
	
	
}

