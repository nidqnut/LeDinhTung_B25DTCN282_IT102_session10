#include <stdio.h>

int main() {
    int n, id;

    // Nhập số lượng sản phẩm
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int price[n];

    // Nhập giá bán của từng sản phẩm
    printf("Nhap gia ban cua tung san pham:\n");
    for (int i = 0; i < n; i++) {
        printf("San pham %d: ", i);
        scanf("%d", &price[i]);
    }

    // Nhập mã sản phẩm cần tìm
    printf("Nhap ma san pham (id) can tim: ");
    scanf("%d", &id);

    // --- BINARY SEARCH (tìm kiếm theo mã sản phẩm = chỉ số) ---
    if (id >= 0 && id < n) {
        printf("Gia cua san pham co ma %d la: %d\n", id, price[id]);
    } else {
        printf("Khong tim thay san pham co ma %d\n", id);
    }

    // --- BUBBLE SORT (sắp xếp theo giá bán tăng dần) ---
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (price[j] > price[j + 1]) {
                int temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break; // Dừng sớm nếu không có hoán đổi
    }

    // In danh sách sau khi sắp xếp
    printf("Danh sach san pham sau khi sap xep theo gia tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("San pham %d: %d\n", i, price[i]);
    }

    return 0;
}