#include <stdio.h>

int main()
{
    int r, c, A[10][10], B[10][10], i, j, flag = 1;
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
    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (A[i][j] != B[i][j])
            {
                flag == 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("The matrics are equal");
    }
    else
    {
        printf("The matrics are not equal");
    }

    return 0;
}