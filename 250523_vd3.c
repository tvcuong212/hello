#include <stdio.h>

void main() {
    int ary[5];
    int i, min, max, tong=0;
    float trungbinh;
    for (i = 0; i < 5; i++) {
        printf("Nhap vao phan tu %d: ", i+1);
        scanf("%d", &ary[i]);
        tong += ary[i];
        if(i == 0)
        {
            max = ary [0];
            min = ary [0];
        }
        else
        {
            if (ary[i] > max)
                max = ary[i];
            if (ary[i] < min)
                min = ary[i];
        }
        
    }
        trungbinh = (float)tong/i;
    
    printf("So lon nhat la %d", max);
    printf("\nSo be nhat la %d\n", min);
    printf("Tong cac so la %d\n", tong);
    printf("Trung binh cac so la %3f2\n", trungbinh);

        }
