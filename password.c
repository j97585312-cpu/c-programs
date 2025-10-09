/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:Prompt user to enter correct password
*/#include <stdio.h>
int main()
{
int password;

do{
	printf("enter password:");
	scanf("%d",&password);
}	while (password != 1234);

printf("acess granted\n");
	return 0;
}