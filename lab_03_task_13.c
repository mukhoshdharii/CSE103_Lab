#include <stdio.h>

int main()
{
    int a,n, i, reminder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n;
    for (i = 0; n != 0; i++)
    {
        reminder = n % 10;
        sum = sum + (reminder * reminder * reminder);
        n = n / 10;
    }
    
    if(a==sum){
        printf("%d is an Armstrong number",a);
    }
    else{
        printf("%d is not an Armstrong number",a);}
    return 0;
}