#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) //5
    {
        // spaces
        for(j = 1; j <= n - i; j++) //
        {
            printf("* ");
        }

        // stars
        // for(j = 1; j <= (2 * i - 1); j++)
        // {
        //     printf("* ");
        // }

        printf("\n");
    }

    return 0;
}