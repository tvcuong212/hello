#include<stdio.h>

int xeploai(int n){
    
    if (n>=90){
        printf("Xep loai A\n");
    }
    else if (n>=80 && n<90){
        printf("Xep loai B\n");
    }
    else if (n>=70 && n<80){
        printf("Xep loai C\n");
    }
    else if (n>=60 && n<70){
        printf("Xep loai D\n");
    }
    else if (n<60){
        printf("Xep loai F\n");
    }
    return 0;
}

int main(){
    int diem;
    
    printf("Nhap vao diem cua ban: ");
    scanf("%d", &diem);
    
    xeploai(diem);
 
    
    return 0;
}
