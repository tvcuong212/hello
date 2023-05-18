#include <stdio.h>
#include <math.h>

int main() {
    int marks;
    
    printf("Nhap vao diem: ");
    scanf("%d", &marks);
    
    if (marks > 75)
    {
        printf("Hang A\n");
    }
    else if (marks > 60 && marks <=75)
    {
        printf("Hang B\n");
    }
    else if (marks > 45 && marks <=60)
    {
        printf("Hang C\n");
    }
    else if (marks > 35 && marks <=45)
    {
        printf("Hang D\n");
    }
    else if (marks > 0 && marks <=35)
    {
        printf("Hang E\n");
    }
    else
        printf("Vui long nhap lai diem\n");
    
    return 0;
}
