# Write-a-c-program-that-how-to-know-age-from-year-month-day-to-in-days-only.


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


![image](https://github.com/rahul-joy/Write-a-c-program-that-how-to-know-age-from-year-month-day-to-in-days-only./assets/81201194/7d01979a-b3bf-46b4-a68e-ee15f6e940df)
