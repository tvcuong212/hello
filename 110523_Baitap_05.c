#include <stdio.h>

int main()
{
    float top, bottom, height, area ;

    printf("top = ");
    scanf("%f", &top);
    printf("bottom = ");
    scanf("%f", &bottom);
    printf("height = ");
    scanf("%f", &height);

    area = (top+bottom)*height/2;
    
    printf("area = %f\n", area);

    return 0;
}
