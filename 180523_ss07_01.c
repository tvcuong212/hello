#include <stdio.h>

int main() {
    int a, b;
  
    printf("Nhap vao gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap vao gia tri cua b: ");
    scanf("%d", &b);
    
    if (a % b == 0)
        printf("a chia het cho b\n");
    else
        printf("a khong chi het cho b\n");
    
    return 0;
}
