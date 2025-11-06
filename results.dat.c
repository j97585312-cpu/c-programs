/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:A c program to store students results in a file
date:6/11/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 50
#define REG_NUM_LENGTH 20

// holding student information
typedef struct {
    char name[NAME_LENGTH];
    char reg_number[REG_NUM_LENGTH];
    int total_marks;
} Student;

int main() {
    FILE *file_ptr;
    Student student;

    // Open file for reading
    file_ptr = fopen("results.dat", "rb");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Displaying student examination results:\n");

    // Read records from the file one by one until the end of the file is reached
    while (fread(&student, sizeof(Student), 1, file_ptr) == 1) {
        printf("Name: %s, Marks: %d\n", student.name, student.total_marks);
    }

    fclose(file_ptr);
    printf("File 'results.dat' has been closed.\n");

    return 0;
}