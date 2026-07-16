#include <stdio.h>

int main()
{
    int r, c, A[10][10], B[10][10], i, j, flag = 1;
    printf("Enter rows of matrix: ");
    scanf("%d", &r);
    printf("Enter columns of matrix: ");
    scanf("%d", &c);
    if (r != c)
    {
        printf("Transpose not possible. row != column.");
        return 0;
    }
    printf("Enter the elements of matrix A: \n");
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
            B[i][j] = A[j][i];
        }
    }

    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (A[i][j] != B[i][j])
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
    return 0;
}