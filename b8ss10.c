#include <stdio.h>

int main() {
    int n, x;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhập mảng chưa sắp xếp
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Nhập phần tử cần tìm
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // --- BUBBLE SORT (sắp xếp tăng dần) ---
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break; // Dừng sớm nếu không có hoán đổi
    }

    // In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // --- BINARY SEARCH ---
    int left = 0, right = n - 1, found = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == x) {
            found = mid;
            break;
        } else if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Kết quả tìm kiếm
    if (found != -1)
        printf("Chi so cua phan tu can tim: %d\n", found);
    else
        printf("Khong tim thay phan tu trong mang.\n");

    return 0;
}