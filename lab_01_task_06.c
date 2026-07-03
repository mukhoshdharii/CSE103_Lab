#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter first number: "); //2
    scanf("%d", &n1);
    printf("Enter second number: ");    //5
    scanf("%d", &n2);   
    printf("Before swaping,\n N1=%d\n N2=%d\n", n1,n2);

   
    n1=n1+n2;  //n1=7
    n2=n1-n2;    //n2=7-5==2 || n2=2
    n1=n1-n2;   //n1=7-2==5

    printf("After swaping,\n N1=%d\n N2=%d", n1,n2);
    return 0;
}