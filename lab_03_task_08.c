#include <stdio.h>

int main()
{
    int n, i, reverse = 0, reminder;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; n != 0; i++)
    {
        reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n = n / 10;
    }
    printf("Reversed number: %d", reverse);

    return 0;
}