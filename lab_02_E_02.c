#include <stdio.h>

int main()
{
    float w, h, bmi;
    printf("Enter your weight(kg): ");

    scanf("%f", &w);
    printf("Enter your height(m): ");
    scanf("%f", &h);
    bmi = (w) / (h * h);
    printf("BMI = %d", bmi);
    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    if (bmi >= 18.5 && bmi < 24.5)
    {
        printf("Normal weight");
    }
    if (bmi >= 25 && bmi < 29.96)
    {
        printf("Overweight");
    }
    if (bmi >= 30)
    {
        printf("Obesity");
    }

    return 0;
}