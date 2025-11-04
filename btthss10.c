#include <stdio.h>

int main() {
    int a[100];
    int n;
    int chon;

    printf("Nhap so phan tu ban dau (toi da 100): ");
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    do {
        printf("\n----------------- Quan ly danh sach so nguyen -----------------\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Sap xep mang (Bubble Sort)\n");
        printf("7. Thoat chuong trinh\n");
        printf("---------------------------------------------------------------\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch(chon)
        {
            case 1: {
                int x, pos;
                printf("Nhap gia tri can chen: ");
                scanf("%d", &x);
                printf("Nhap vi tri chen (0..%d): ", n);
                scanf("%d", &pos);

                if (pos<0 || pos>n || n>=100) printf("Vi tri sai!\n");
                else {
                    for (int i=n; i>pos; i--) a[i]=a[i-1];
                    a[pos]=x;
                    n++;
                    printf("Da them.\n");
                }
                break;
            }

            case 2: {
                int pos;
                printf("Nhap vi tri can xoa (0..%d): ", n-1);
                scanf("%d", &pos);

                if (pos<0 || pos>=n) printf("Vi tri sai!\n");
                else {
                    for (int i=pos; i<n-1; i++) a[i]=a[i+1];
                    n--;
                    printf("Da xoa.\n");
                }
                break;
            }

            case 3: {
                int pos, x;
                printf("Nhap vi tri can cap nhat (0..%d): ", n-1);
                scanf("%d", &pos);
                if (pos<0 || pos>=n) printf("Vi tri sai!\n");
                else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &x);
                    a[pos]=x;
                    printf("Da cap nhat.\n");
                }
                break;
            }

            case 4: {
                int x, found=-1;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                for (int i=0;i<n;i++)
                {
                    if (a[i]==x){ found=i; break; }
                }
                if (found==-1) printf("Khong tim thay!\n");
                else printf("Tim thay tai vi tri %d\n", found);
                break;
            }

            case 5: {
                printf("Mang hien tai: ");
                for (int i=0;i<n;i++) printf("%d ", a[i]);
                printf("\n");
                break;
            }

            case 6: {
                for (int i=0;i<n-1;i++)
                    for (int j=0;j<n-1-i;j++)
                        if (a[j] > a[j+1]) {
                            int t=a[j];
                            a[j]=a[j+1];
                            a[j+1]=t;
                        }
                printf("Da sap xep tang dan.\n");
                break;
            }

            case 7: {
                printf("Ket thuc chuong trinh!\n");
                break;
            }

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(chon != 7);

    return 0;
}