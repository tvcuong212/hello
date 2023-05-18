#include <stdio.h>
#include <math.h>

int main() {
    int matkhau, matkhaumoi, luachon, sodudau=1000, sodusau, rut;
    
    printf("Vui long nhap mat khau: ");
    scanf("%d", &matkhau);
    
    if (matkhau == 1997)
    {
        printf("Mat khau dung, dang nhap thanh cong\n");
        printf("1. Rut tien\n");
        printf("2. Nop tien\n");
        printf("3. Kiem tra so du\n");
        printf("4. Doi mat khau\n");

        printf("Vui long nhap lua chon: ");
        scanf("%d", &luachon);
    
    switch(luachon){
        case 1:
            printf("Vui long chon so tien muon rut: ");
            scanf("%d", &rut);
            if (rut > sodudau)
            {
                printf("So du trong tai khoan cua ban khong du");}
            else
            {
                sodusau = sodudau - rut;
                printf("Tai khoan cua ban con: %d\nXin tran trong cam on!\n", sodusau);
            }
            break;
        case 2:
            printf("Vui long cho tien vao ATM");
            break;
        case 3:
            printf("Tai khoan cua ban con 1000\nXin tran trong cam on\n");
            break;
        case 4:
            printf("Vui long nhap vao mat khau moi: ");
            scanf("%d", &matkhaumoi);
            printf("Doi mat khau thanh cong\n");
            break;
    }
    }

    else
    {
        printf("Mat khau sai, vui long nhap lai mat khau\n");}
 
    return 0;
}
