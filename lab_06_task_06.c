#include <stdio.h>

int main()
{
    int r, c, A[10][10], B[10][10], i, j;
    printf("Enter rows of matrix: ");
    scanf("%d", &r);
    printf("Enter columns of matrix: ");
    scanf("%d", &c);
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

    printf("Transpose of the matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}