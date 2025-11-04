#include<stdio.h>
int main(){
    int n;
    int x;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    int a[n];
   for(int i=0;i<n;i++){
    printf("Nhap a[%d]: ",i);
    scanf("%d",&a[i]);
   }
    printf("Nhap so can tim: ");
    scanf("%d",&x);
      int left = 0, right = n - 1;
    int found = -1; 

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
        printf("Khong tim thay.\n");

    return 0;
}