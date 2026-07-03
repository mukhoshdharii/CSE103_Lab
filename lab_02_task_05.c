#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter third number: ");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("The maximum number is %d\n", n1);
        if (n2 > n3)
        {
            printf("Tme minimum number is %d", n3);
        }
        else
        {
            printf("The minimum number is %d", n2);
        }
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("The maximum number is %d\n", n2);
        if (n1 > n3)
        {
            printf("Tme minimum number is %d", n3);
        }
        else
        {
            printf("The minimum number is %d", n1);
        }
    }
    if (n3 > n2 && n3 > n1)
    {
        printf("The maximum number is %d\n", n3);
        if (n2 > n1)
        {
            printf("Tme minimum number is %d", n1);
        }
        else
        {
            printf("The minimum number is %d", n2);
        }
    }
    return 0;
}