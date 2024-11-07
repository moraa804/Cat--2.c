/*
name: Nancy moraa Kebaso 
reg no:CT101/G/23248/24
*/
#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float regular_hours, overtime_hours, gross_pay, tax, net_pay;

    // prompt the user to enter
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate regular and overtime hours
    regular_hours = (hours_worked > 40);
    overtime_hours = (hours_worked > 40);

    // Calculate gross pay
    gross_pay = (regular_hours * hourly_wage) + (overtime_hours * hourly_wage * 1.5);

    // Calculate taxes
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    net_pay = gross_pay - tax;

    // Display the results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
