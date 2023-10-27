#include <stdio.h>

int main() {
    int years, months, days;

    // Input age in years, months, and days
    printf("Enter your age in years: ");
    scanf("%d", &years);
    printf("Enter your age in months: ");
    scanf("%d", &months);
    printf("Enter your age in days: ");
    scanf("%d", &days);

    // Calculate age in days
    int ageInDays = (years * 365) + (months * 30) + days;

    // Output the age in days
    printf("Your age in days is: %d days\n", ageInDays);

    return 0;
}
