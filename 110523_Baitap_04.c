#include <stdio.h>

int main() {
    float doC, doF ;

    printf("Nhap vao do C: ");
    scanf("%f", &doC);

    doF = (doC*9/5+32);
    
    printf("%f do C = %f do F\n", doC, doF);

    return 0;
}
