#include <stdio.h>

int main()
{
    int p;
    float si, r, t;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter rate of the interest: ");
    scanf("%f", &r);
    printf("Enter period of time: ");
    scanf("%f", &t);
    si = (float)(p * r * t) / 100;
    printf("The amount of Simple intersest = %.2f", si);
    return 0;
}