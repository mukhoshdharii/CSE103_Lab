#include <stdio.h>

int main(){
    int n,i,src,count=0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to find frequency: ");
    scanf("%d",&src);

    for(i=0;i<n;i++){
        if(arr[i]==src){
            count++;
        }
    }
    
        printf("Frequency of %d is %d",src,count);
    
    
    
  
    return 0;
}