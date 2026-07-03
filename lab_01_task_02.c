#include <stdio.h>

int main()
{
    int n1, n2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter operator(+,-,*./): ");
    scanf(" %c", &op);
    if (op == '+')
    {
        printf("The addition result is: %d", n1 + n2);
    }
    else if (op == '-')
    {
        printf("The substraction result is: %d", n1 - n2);
    }
    else if (op == '*')
    {
        printf("The multiplication result is: %d", n1 * n2);
    }
    else if (op == '/')
    {
        printf("The division result is: %.2f",(float) n1 / n2);
    }
    else
    {
        printf("error 404; invalid opoerator.");
    }
    return 0;
}