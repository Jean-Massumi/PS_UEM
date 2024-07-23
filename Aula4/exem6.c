#include <stdio.h>
#include <math.h>

unsigned int isqrt(unsigned int A)
{
    // isqrt(A) calcula a raiz quadrada inteira de um inteiro positivo A. Exemplos:
    // isqrt(9)=3. isqrt(15)=3. isqrt(27)=5 computada por newton-rapson:
    // isqrt(A) = x(k+1) após convergir para x(k+1) = (x(k) + A/x(k))/2

    if (A <= 1) return A; // A é zero ou 1
    if (A <= 3) return 1; // A é 2 ou 3
    
    unsigned int x1 = A >> 1; //x1 = A / 2;
    unsigned int x0; // estimativa atual

    do {
        x0 = x1; // x0 -> estimativa atual
        //x1 -> próxima estimativa
        x1 = (x0 + A/x0) >> 1;
    } while (x1 < x0);
    
    return x0; // resultado de isqrt(A)
}

int main(void){
    printf("\n X isqrt(x) floor(sqrt(x))");

    for (int k=70; k<=100; k++) {
        unsigned int x = isqrt(k);
        unsigned int r = floor(sqrt(k));

        printf("\n %5d   %5d    %5d", k, x, r);
    }
    return 0;
}