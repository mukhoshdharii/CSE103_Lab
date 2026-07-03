#include <stdio.h>

int main(){
    int n,i,src,found=0;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&src);

    for(i=0;i<n;i++){
        if(arr[i]==src){
            found=1;
        }
    }
    if(found==1){
        printf("Element %d found at position %d",src,i-1);
    }
    else{
        printf("Element %d not found in the arrey",src);
    }
    
  
    return 0;
}