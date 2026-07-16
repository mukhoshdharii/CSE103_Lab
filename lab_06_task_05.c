#include <stdio.h>

int main()
{
    int r, c, A[10][10], i, j, flag = 1;

    printf("Enter rows of matrix: ");
    scanf("%d", &r);

    printf("Enter columns of matrix: ");
    scanf("%d", &c);

    if (r != c)
    {
        printf("The matrix is not an Identity matrix");
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
            if ((i == j && A[i][j] != 1) ||
                (i != j && A[i][j] != 0))
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag)
        printf("The matrix is an Identity matrix");
    else
        printf("The matrix is not an Identity matrix");

    return 0;
}