#include <stdio.h>

int timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int kq = timMax(a, n);
    printf("So lon nhat trong mang la: %d\n", kq);

    return 0;
}
