#include <stdio.h>

int main()
{
    int n, i, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The multiplication table of %d:\n", n);
    for (i = 0; i <= 10; i++)
    {
        sum = i * n;
        printf("%d x %d = %d\n", n, i, sum);
    }
    return 0;
}