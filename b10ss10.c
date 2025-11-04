#include <stdio.h>

int main() {
    int n;

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhập các phần tử trong mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // --- 1. Tìm số nhỏ nhất bằng Linear Search ---
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    printf("So nho nhat trong mang la: %d\n", min);

    // --- 2. Sắp xếp mảng theo thứ tự tăng dần bằng Selection Sort ---
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        // Hoán đổi phần tử nhỏ nhất với phần tử đầu của vùng chưa sắp xếp
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // --- 3. Tìm kiếm nhị phân (Binary Search) ---
    int x;
    printf("Nhap so can tim trong mang da sap xep: ");
    scanf("%d", &x);

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

    if (found != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, found);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", x);

    return 0;
}