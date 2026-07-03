#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, sum;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("sum of the series: %d\n", sum);

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i , i);
    }

    printf("sum of the series: %d", sum);

    return 0;
}