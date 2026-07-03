#include <stdio.h>

int main()
{
    int bs;
    float s, hra, da;
    printf("Enter the basic salary: ");
    scanf("%d", &bs);

    if (bs <= 10000)
    {
        hra = .2 * bs;
        da = .8 * bs;
        s = bs + hra + da;
        printf("Gorss salary = %.2f", s);
    }
    if (bs >= 10000 && bs <= 20000)
    {
        hra = .25 * bs;
        da = .9 * bs;
        s = bs + hra + da;
        printf("Gorss salary = %.2f", s);
    }
    if (bs > 20000)
    {
        hra = .3 * bs;
        da = .95 * bs;
        s = bs + hra + da;
        printf("Gorss salary = %.2f", s);
    }

    return 0;
}