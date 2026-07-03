#include <stdio.h>

int main()
{
    int i, j, n = 5;
    printf("Enter the size: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // spaces
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        // stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        // for (j = 1; j <= n - i; j++)
        // //spaces
        // {
        //     printf("  ");
        // }

        printf("\n");
    }

    return 0;
}