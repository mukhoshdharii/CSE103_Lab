#include <stdio.h>

int main()
{
    int n1, n2, n3;
    float sum;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    sum = (float) (n1 + n2 + n3) / 3;
    printf("average: %.2f", sum);

    return 0;
}