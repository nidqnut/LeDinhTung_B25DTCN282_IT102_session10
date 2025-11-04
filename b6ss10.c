#include <stdio.h>

int main() {
    int n, i, j, temp;
    int swapped; 

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
    }
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
