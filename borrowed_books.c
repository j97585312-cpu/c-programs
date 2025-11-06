/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:program to display borrowed books in a library
date:6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_LENGTH 256

int main() {
    FILE *file_ptr;
    char title[MAX_TITLE_LENGTH];

    // Create the file if it doesn't exist.
    file_ptr = fopen("borrowed_books.txt", "a");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter book titles (or type 'quit' to exit):\n");

    while (1) {
        printf("Enter title: ");
        if (fgets(title, MAX_TITLE_LENGTH, stdin) == NULL) {
            break;
        }

        // Remove trailing newline character
        title[strcspn(title, "\n")] = 0;

        if (strcmp(title, "quit") == 0) {
            break;
        }

        fprintf(file_ptr, "%s\n", title);

        printf("Confirmation: The title '%s' was successfully stored.\n", title);
    }

    fclose(file_ptr);
    printf("Program finished. File 'borrowed_books.txt' has been closed.\n");

    return 0;
}
