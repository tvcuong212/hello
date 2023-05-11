#include <stdio.h>

int main() {
  int i, a, b, c, d;
    int kq1, kq2, kq3;
  
  printf("i = ");
  scanf("%d", &i);
  
  printf("a = ");
  scanf("%d", &a);
    
  printf("b = ");
  scanf("%d", &b);
    
  printf("c = ");
  scanf("%d", &c);
  
  printf("d = ");
  scanf("%d", &d);

  kq1 = ++i % 7;
  printf("kq1 = %d\n", kq1);

  kq2 = 5 * (c - 3 + d);
  printf("kq2 = %d\n", kq2);

  kq3 = a * (b + c/d) - 22;
  printf("kq3 = %d\n", kq3);
  
  return 0;
}
