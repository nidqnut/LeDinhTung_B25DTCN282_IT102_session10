#include <stdio.h>

int main() {
    int n, i, x, found = -1;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("%d\n", found);
    else
        printf("Khong tim thay\n");

    return 0;
}
