#include <stdio.h>
#include<math.h>

int main(){
    int binary, temp,decimal=0,n=0,lstdgt;
    
    printf("Input number of digit: ");
    
        scanf("%d",&binary);
  

    temp=binary;

    while (temp>0)
    {
        lstdgt=temp%10;

        if(lstdgt==1){
            decimal+=pow(2,n);
        }
        n++;

        temp=temp/10;
    }
    
    printf("Decimal: %d",decimal);
    return 0;
}