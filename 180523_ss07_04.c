#include <stdio.h>
#include <math.h>

int main() {
    int luong, tongluong;
    char capdo;
        
    printf("Nhap vao cap do: ");
    scanf("%c", &capdo);
    
    printf("Nhap vao luong: ");
    scanf("%d", &luong);
    
    if (capdo == 'a' || capdo == 'A')
    {
        tongluong = luong + 300;
        printf("Tong luong la: %d\n", tongluong);
    }
    else if (capdo == 'b' || capdo == 'B')
    {
        tongluong = luong + 250;
        printf("Tong luong la: %d\n", tongluong);
    }
    else
    {
        tongluong = luong + 100;
        printf("Tong luong la: %d\n", tongluong);
    }
    return 0;
}
