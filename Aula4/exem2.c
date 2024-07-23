#include<stdio.h>;

int main(void) {
    int a = 5, b = 3;

    int maior = (a > b) ? a : b;

    printf("O maior número entre %d e %d é %d\n", a, b, maior);
    
    return 0;
}