#include <stdio.h>

int main() {
    int n, i,largest,second;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }


    second = arr[0];
    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    if(largest == second) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}