#include <stdio.h>

long long giaiThua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int x;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    long long kq = giaiThua(x);
    printf("Giai thua cua %d = %lld\n", x, kq);

    return 0;
}