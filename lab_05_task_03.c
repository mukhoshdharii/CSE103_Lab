#include <stdio.h>

int main(){
    int n,i,sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("Sum of the elements: %d \n",sum);
    printf("Average of the elements: %.2f ",avg);
    return 0;
}