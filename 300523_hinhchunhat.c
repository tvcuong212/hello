#include<stdio.h>

float chuvi(float n, float m){
    float c;
    c = 2 * (n + m);
    return c;
}

float dientich(float n, float m){
    float s;
    s = n * m;
    return s;
}

int main(){
    float a,b;
    
    printf("Nhap vao chieu canh 1: ");
    scanf("%f", &a);
    printf("Nhap vao chieu canh 2: ");
    scanf("%f", &b);
    
    printf("Chu vi hinh chu nhat la: %2f\n", chuvi(a,b));
    printf("Dien tich hinh chu nhat la: %2f\n", dientich(a,b));
    return 0;
}
