#include <stdio.h>

int main() {
    int arr[100], pos, i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete from : ");
    scanf("%d", &pos);

    
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        
        printf("Array after deletion:\n");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}