/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:Number guessing game
date:9/10/2025
*/
#include <stdio.h>

int main() {
    int secret_number =7;
    int guess;
    int attempts = 0;

    printf("WELCOME TO THIS GAME. PARTICIPATE TO HAVE A CHANCE OF WINNING BIG!!\n");

    do {
        printf("Guess of a number between 1 and 20; ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number){
            printf("Too low!\n");}
			
	}	while (guess != secret_number);

   printf("Congratulations!\n", attempts);

    return 0;
}



