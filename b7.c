#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int demNt = 0; 

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Cac so nguyen to tu %d den %d la:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (i < 2) continue;

        int soNT = 1; 
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                soNT = 0;
                break;
            }
        }

        if (soNT == 1) {
            printf("%d ", i);
            demNt++;
        }
    }

    printf("\nCo tong cong %d so nguyen to.\n", demNt);

    return 0;
}



