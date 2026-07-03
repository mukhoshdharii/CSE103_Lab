#include <stdio.h>

int main()
{
    int a, b, i;
    printf("Even numbers from 1 to 500 in forward order: \n");
    for (a = 0; a <= 500; a = a + 2)
    {

        printf("%d, ", a);
    }
    printf("\nEven numbers from 1 to 500 in backward order: \n");

    for (i = 500; i >= 0; i = i - 2)
    {
        printf("%d, ", i);
    }
    return 0;
}