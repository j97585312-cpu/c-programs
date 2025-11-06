/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:CAT 1 ANSWER TO QUESTION 3
*/
#include <stdio.h>
#include <stdlib.h>

void write_integers_to_file() {
    FILE *fp;
    int num;
    int i;
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Exiting.\n");
            fclose(fp);
            return;
        }
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);
    printf("Integers written to input.txt successfully.\n");
}

void process_and_write_results() {
    FILE *in_fp, *out_fp;
    int num, sum = 0, count = 0;
    double average;

    in_fp = fopen("input.txt", "r");
    if (in_fp == NULL) {
        printf("Error opening input file for reading!\n");
        return;
    }

    while (fscanf(in_fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(in_fp);

    if (count > 0) {
        average = (double)sum / count;
    } else {
        average = 0.0;
    }

    out_fp = fopen("output.txt", "w");
    if (out_fp == NULL) {
        printf("Error opening output file for writing!\n");
        return;
    }

    fprintf(out_fp, "Sum: %d\n", sum);
    fprintf(out_fp, "Average: %.2f\n", average);
    fclose(out_fp);
    printf("Sum and average written to output.txt successfully.\n");
}

void display_file_contents() {
    FILE *fp;
    char ch;

    printf("\n--- Contents of input.txt ---\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input file!\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }

    printf("\n--- Contents of output.txt ---\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening output file!\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }
    printf("\n---------------------------\n");
}

int main() {
    write_integers_to_file();
    process_and_write_results();
    display_file_contents();
    return 0;
}