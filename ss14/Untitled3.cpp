#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d",&x);
    
    printf("Nhap so thu hai: ");
    scanf("%d",&y);

    int kq = tinhTong(x, y); 
    printf("Tong = %d\n", kq);

    return 0;
}
