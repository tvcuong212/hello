#include<stdio.h>

int main(){
    float chiphi[7];
    for (int i = 0; i <=6 ; i++){
        printf("Nhap vao chi tieu cua ngay %d: ", i + 1);
        scanf("%f", &chiphi[i]);}
    
    float tongchiphi, ngansach;
    printf("Nhap ngan sach hang tuan: ");
    scanf("%f", &ngansach);
    for (int i = 0; i <=6; i++){
        tongchiphi += chiphi[i];}
    printf("Tong chi tieu trong tuan la: %6f\n", tongchiphi);
    if (tongchiphi > ngansach)
        printf("Chi tieu vuot ngan sach\n");
    else
        printf("Chi tieu trong ngan sach\n");
    float max = chiphi[0];
    for (int i = 1; i <=6; i++){
        if (max < chiphi[i]){
            max = chiphi[i];
        }
    }
    printf("Chi tieu cao nhat trong tuan la: %6f\n", max);
}
