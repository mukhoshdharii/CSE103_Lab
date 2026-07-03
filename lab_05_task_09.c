#include <stdio.h>

int main() {
    int i,arr[100], n, pos, element;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position to insert at: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos - 1] = element;
    n++;

   
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}