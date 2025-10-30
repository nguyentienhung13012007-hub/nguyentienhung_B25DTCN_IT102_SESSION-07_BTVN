#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int temp = n;
    int unit;
    int daoNguoc = 0;

    while (n != 0) {
        unit = n % 10;                
        daoNguoc = daoNguoc * 10 + unit; 
        n=n/10;
    }

    printf("So dao nguoc cua %d la: %d\n", temp, daoNguoc);

    return 0;
}


