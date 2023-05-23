#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int option, exit=0, phobo=0, phoga=0, combo=0, comga=0, sum;
    
    do {
        printf("--- Menu ---\n");
        printf("1. Pho bo (25000 VND)\n");
        printf("2. Pho ga (30000 VND)\n");
        printf("3. Com bo (35000 VND)\n");
        printf("4. Com ga (40000 VND)\n");
        printf("5. Thanh toan\n");
        printf("Nhap vao lua chon cua ban (1-5): ");
        scanf("%d", &option);
        
        
        switch (option){
            case 1:
                printf("Ban da chon 1 suat pho bo (25000 VND)\n\n");
                phobo++;
                break;
            case 2:
                printf("Ban da chon 1 suat pho ga (30000 VND)\n\n");
                phoga++;
                break;
            case 3:
                printf("Ban da chon 1 suat com bo (35000 VND)\n\n");
                combo++;
                break;
            case 4:
                printf("Ban da chon 1 suat com ga (40000 VND)\n\n");
                comga++;
                break;
            case 5:
                exit=2;
                printf("Cac mon ban da chon la: \n");
                printf("Pho bo: %d\n", phobo);
                printf("Pho ga: %d\n", phoga);
                printf("Com bo: %d\n", combo);
                printf("Com ga: %d\n", comga);
                sum = phobo * 25000 + phoga * 30000 + combo * 35000 + comga * 40000;
                printf("Tong so tien ban phai thanh toan la: %d VND\n", sum);
        }
    }
    while(exit <= 1);

    return 0;
}
