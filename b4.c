#include <stdio.h>
int main(){
    int n,m;
    printf("nhap so dong: ");
    scanf("%d",&n);
    printf("nhap so cot: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        printf(" *");
        }
        printf("\n");
}
    return 0;
}
