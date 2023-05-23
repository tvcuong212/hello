#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2;
    srand(time(NULL));

    num1 = rand() % 100 + 1;
    
    do {
        printf("Nhap vao so ban doan: ", num2);
        scanf("%d", &num2);
        
        if (num1 == num2){
            printf("\nChuc mung ban da doan dung!\n");}
        else if (num1 > num2){
            printf("So ban doan qua thap!\n");}
        else {
                printf("So ban doan qua cao!\n");}}
        
        while(num1 != num2);
        return 0;
}
