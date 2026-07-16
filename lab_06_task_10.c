#include <stdio.h>

int main()
{
    int r, c, A[10][10], i, j, count = 0;

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
            if (A[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count >= (r * c) / 2)
    {

        printf("The matrix is space matrix");
    }
    else
    {
        printf("The matrix is not space matrix");
    }

    return 0;
}