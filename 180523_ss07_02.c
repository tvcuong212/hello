#include <stdio.h>

int main() {
    int a, b = 0;
    int s;
  
    printf("Nhap vao gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap vao gia tri cua b: ");
    scanf("%d", &b);
    
    s= a * b;
    if (s >= 1000)
    {
        printf("a x b lon hon bang 1000\n");}

    else
    {
        printf("a x b nho hon 1000\n");}
    
    return 0;
}
