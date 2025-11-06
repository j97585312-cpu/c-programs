/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:CAT 1 ANSWER TO QUESTION 1
*/
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    int i, j;

    printf("Elements of the 2D array are:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    return 0;
}