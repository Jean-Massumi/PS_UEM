#include<stdio.h>;

void main(){
    int a = 17, b = 3;  // Declaração seguida de atribuição
    int x, y;
    float z = 17.,z1, z2;

    x = a / b;    // Divisão inteira formato int
    y = a % b;    // Resto (módulo) da divisão inteira entre dois inteiros
    z1 = z / b;   // Divisão real formato float (z é float)
    z2 = a / b;     // Divisão inteira formato float   

    printf("%i\n", x);
    printf("%i\n", y);
    printf("%f\n", z1);
    printf("%f\n", z2);

}

