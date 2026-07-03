#include <stdio.h>

int main()
{
    float cr1, cr2, cr3, g1, g2, g3, cgpa, tcse, tmat, teng, tg, tc;
    printf("Enter credit hours of CSE103: ");
    scanf("%f", &cr1);
    printf("Enter grade point of CSE103: ");
    scanf("%f", &g1);
    printf("Enter credit hours of MAT101: ");
    scanf("%f", &cr2);
    printf("Enter grade point of MAT101: ");
    scanf("%f", &g2);
    printf("Enter credit hours of ENG101: ");
    scanf("%f", &cr3);
    printf("Enter grade point of ENG101: ");
    scanf("%f", &g3);
    tcse = cr1 * g1;
    tmat = cr2 * g2;
    teng = cr3 * g3;
    tg = tcse + tmat + teng;
    tc = cr1 + cr2 + cr3;
    cgpa = (tg) / tc;
    printf("CGPA = %.2f", cgpa);

    return 0;
}