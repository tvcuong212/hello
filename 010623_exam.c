#include <stdio.h>

int isEvenNumber();

int main(){
    int n, m;
    
    printf("+ n: ");
    scanf("%d", &n);
    printf("+ m: ");
    scanf("%d", &m);
    
    printf("The even numbers betwen %d and %d: \n", n, m);
    for (int i = n+1; i < m; i++){
        if (isEvenNumber(i)){
            printf("%d\n", i);}}
    return 0;
}

int isEvenNumber(int number){
    if(number % 2 == 0) return 1;
    else return 0;
}
