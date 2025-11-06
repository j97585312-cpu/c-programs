/*
name:Wanjiru Julius Irungu
reg NO:CT101/G/26489/25
description:CAT 1 ANSWER TO QUESTION 2
*/
#include <stdio.h>

int main() {
    double hours_worked, hourly_wage;
    double gross_pay, taxes, net_pay;
    double regular_hours = 40.0;
    double overtime_rate = 1.5;
    double tax_rate_first_600 = 0.15;
    double tax_rate_rest = 0.20;
    double tax_threshold = 600.0;
    double tax_on_first_600 = tax_threshold * tax_rate_first_600;

    // Step 1: Request user input
    printf("Enter the number of hours worked in a week: ");
    scanf("%lf", &hours_worked);

    printf("Enter the hourly wage: ");
    scanf("%lf", &hourly_wage);

    // Step 2: Calculate the gross pay
    if (hours_worked <= regular_hours) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        double regular_pay = regular_hours * hourly_wage;
        double overtime_hours = hours_worked - regular_hours;
        double overtime_pay = overtime_hours * (hourly_wage * overtime_rate);
        gross_pay = regular_pay + overtime_pay;
    }

    // Step 3: Calculate the taxes
    if (gross_pay <= tax_threshold) {
        taxes = gross_pay * tax_rate_first_600;
    } else {
        taxes = tax_on_first_600 + (gross_pay - tax_threshold) * tax_rate_rest;
    }

    // Step 4: Calculate the net pay
    net_pay = gross_pay - taxes;

    // Step 5: Print the results
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}