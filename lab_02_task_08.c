#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, r1, r2;
    printf("Enter coefficient a: ");
    scanf("%d", &a);
    printf("Enter coefficient b: ");
    scanf("%d", &b);
    printf("Enter coefficient c: ");
    scanf("%d", &c);
    d = (b * b) - (4 * a * c);
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    printf("The roots of the quadratic equation are:\n");
    printf("Root 1 = %d\n", r1);
    printf("Root 1 = %d", r2);

    return 0;
}