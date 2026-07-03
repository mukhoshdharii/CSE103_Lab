#include <stdio.h>

int main()
{
    int a1, a2, a3, total;
    printf("Enter first angle: ");
    scanf("%d", &a1);
    printf("Enter second angle: ");
    scanf("%d", &a2);
    printf("Enter third angle: ");
    scanf("%d", &a3);
    total = a1 + a2 + a3;
    if (a1 == 0 || a2 == 0 || a3 == 0)
    {
        printf("Invalid angle input. An angle can not be 0");
    }
    else if (total == 180)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
    }

    return 0;
}