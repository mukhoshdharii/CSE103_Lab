#include <stdio.h>

int main()
{
    int m;
    printf("Enter the mark: ");
    scanf("%d", &m);
    if (m <= 100 && m >= 80)
    {
        printf("Grade: A+");
    }
    else if (m < 80 && m >= 70)
    {
        printf("Grade: A");
    }
    else if (m < 70 && m >= 60)
    {
        printf("Grade: B");
    }
    else if (m < 60 && m >= 50)
    {
        printf("Grade: C");
    }
    else if (m < 50 && m >= 40)
    {
        printf("Grade: D");
    }
    else if (m < 40)
    {
        printf("Grade: F");
    }
    else
    {
        printf("Invalid mark.");
    }

    return 0;
}