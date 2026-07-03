#include <stdio.h>

int main()
{
    int a, n, i, sum;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &n);
    sum = a;
    i = 1;
    while (i < n)
    {
        sum = sum * a;
        i++;
    }
    printf("Power = %d", sum);

    return 0;
}