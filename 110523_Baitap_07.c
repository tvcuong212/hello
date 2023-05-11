#include <stdio.h>

int main() {
    float banKinhHinhTron, chuViHinhTron, dienTichHinhTron ;
    float canhHinhVuong, chuViHinhVuong, dienTichHinhVuong ;
    float chieuDai, chieuRong, chuViHcn, dienTichHcn ;
    
    // Nhập bán kính hình tròn
    printf("ban kinh hinh tron = ");
    scanf("%f", &banKinhHinhTron);

    // Tính toán chu vi và diện tích tương đương
    chuViHinhTron = banKinhHinhTron * 2 * 3.14;
    dienTichHinhTron = banKinhHinhTron * banKinhHinhTron * 3.14;

    // In kết quả
    printf("Chu vi hinh tron = %f\n", chuViHinhTron);
    printf("Dien tich hinh tron = %f\n", dienTichHinhTron);
    
    // Nhập cạnh hình vuông
    printf("canh hinh vuong = ");
    scanf("%f", &canhHinhVuong);

    // Tính toán chu vi và diện tích tương đương
    chuViHinhVuong = canhHinhVuong * 4;
    dienTichHinhVuong = canhHinhVuong * canhHinhVuong;

    // In kết quả
    printf("Chu vi hinh vuong = %f\n", chuViHinhVuong);
    printf("Dien tich hinh vuong = %f\n", dienTichHinhVuong);
    
    // Nhập cạnh hình chữ nhật
    printf("chieu dai hinh chu nhat = ");
    scanf("%f", &chieuDai);
    printf("chieu rong hinh chu nhat = ");
    scanf("%f", &chieuRong);

    // Tính toán chu vi và diện tích tương đương
    chuViHcn = (chieuDai+chieuRong) * 2;
    dienTichHcn = chieuDai * chieuRong;

    // In kết quả
    printf("Chu vi hinh chu nhat = %f\n", chuViHcn);
    printf("Dien tich hinh chu nhat = %f\n", dienTichHcn);

    return 0;
}
