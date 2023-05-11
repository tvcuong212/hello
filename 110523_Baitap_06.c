#include <stdio.h>

int main()
{
    float diemToan, diemLy, diemHoa, tongdiem, trungbinhdiem ;

    printf("diem Toan = ");
    scanf("%f", &diemToan);
    printf("diem Ly = ");
    scanf("%f", &diemLy);
    printf("diem Hoa = ");
    scanf("%f", &diemHoa);

    tongdiem = diemToan + diemLy + diemHoa;
    trungbinhdiem = (diemToan+diemLy+diemHoa)/3;
    
    printf("Tong diem = %f\n", tongdiem);
    printf("Trung binh diem = %f\n", trungbinhdiem);

    return 0;
}
