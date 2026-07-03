#include <stdio.h>

int main()
{
    char ap;
    printf("Enter an alphabet: ");
    scanf("%c", &ap);
    if (ap == 'a' || ap == 'A' || ap == 'e' || ap == 'E' || ap == 'i' || ap == 'I' || ap == 'o' || ap == 'O' || ap == 'u' || ap == 'U')
    {
        printf("The alphabet \"%c\" is a Vowel", ap);
    }
    else
    {
        printf("The alphabet \"%c\" is a Consonant", ap);
    }
    return 0;
}