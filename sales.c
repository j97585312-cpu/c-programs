/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:A c program to store sales 
date:6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    float transaction_amount;
    float total_sales = 0.0;

    // Open the file for reading
    file_ptr = fopen("sales.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read transactions from the file and calculate the total
    while (fscanf(file_ptr, "%f", &transaction_amount) == 1) {
        total_sales += transaction_amount;
    }

    // Display the total sales
    printf("Total sales for the day: $%.2f\n", total_sales);

    // Close the file
    fclose(file_ptr);
    printf("File 'sales.txt' has been closed.\n");

    return 0;
}