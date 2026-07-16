#include <stdio.h>

int main(){
    int n,digit,product=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n==0){
        product=0;
    }
    while(n>0){
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("Products of digit: %d",product);
    return 0;
}