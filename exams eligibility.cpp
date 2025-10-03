#include<stdio.h>
int main()
{
	float attendance;
	float average_marks;
	
	printf("attendance percentage = ");
	scanf("%f",&attendance);
	
	printf("average marks = ");
	scanf("%f",&average_marks);
	

	if (attendance >=75&&average_marks >=40){
	printf("Eligible for exams\n");
	}else{
		printf("not eligible for exams\n");}
	return 0;	
}