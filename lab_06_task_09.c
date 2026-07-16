#include <stdio.h>

int main()
{
    int r, c, A[10][10], i, j, flag = 0;

    printf("Enter rows of matrix: ");
    scanf("%d", &r);

    printf("Enter columns of matrix: ");
    scanf("%d", &c);

    if (r != c)
    {
        printf("The matrix is not an upper triangular matrix.");
        return 0;
    }

    printf("Enter the elements of matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i < j && A[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            break;
    }

    if (flag == 0)
        printf("The matrix is a lower triangular matrix.");
    else
        printf("The matrix is not a lower triangular matrix.");

    return 0;
}