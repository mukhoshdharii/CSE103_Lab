#include <stdio.h>

int main()
{
    int r, c, A[10][10], i, j, sum = 0;
    printf("Enter rows of matrix: ");
    scanf("%d", &r);
    printf("Enter columns of matrix: ");
    scanf("%d", &c);
    printf("Enter the elements of matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        sum += A[i][r - 1 - i];
    }
    printf("Sum of minor diagonal element is: %d", sum);

    return 0;
}