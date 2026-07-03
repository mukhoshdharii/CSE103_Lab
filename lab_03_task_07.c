#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; n != 0; i++)
    {
        n = n / 10;
    }
    printf("Number of digits: %d", i);
    return 0;
}