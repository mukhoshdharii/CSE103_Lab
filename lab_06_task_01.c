#include <stdio.h>

int main()
{
    int r, c, A[10][10], B[10][10], sum[10][10], diff[10][10], i, j, op;
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

    printf("Enter operator(+/-): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                sum[i][j] = A[i][j] + B[i][j];
            }
        }
        printf("Sum of matrix A and B is: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        break;
    case '-':
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                sum[i][j] = A[i][j] - B[i][j];
            }
        }
        printf("Difference of matrix A and B is: \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        break;

    default:
        printf("Invalid operator.");
        break;
    }

    return 0;
}