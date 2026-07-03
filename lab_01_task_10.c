#include <stdio.h>

int main()
{
    int number_of_days, year, months, days;

    printf("Enter number of days: ");
    scanf("%d", &number_of_days);
    year = number_of_days / 365;

    number_of_days = number_of_days % 365;
    months = number_of_days / 30;
    days = number_of_days % 30;
    printf("\n%d year, %d month, %d days.", year, months, days);
    return 0;
}