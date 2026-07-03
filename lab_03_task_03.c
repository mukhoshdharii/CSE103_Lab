#include <stdio.h>

int main()
{
    int n, i, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {

        sum = sum * i;
    }
    printf("Factorial of %d is %d", n, sum);
    return 0;
}