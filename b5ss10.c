#include <stdio.h>

int main() {
    int n, i, value, count = 0;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    if (count > 0)
        printf("%d\n", count);
    else
        printf("Khong tim thay\n");

    return 0;
}
