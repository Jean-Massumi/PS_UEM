#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned int n = 101, k, p, fim;

    if (n == 2) {
        printf("\n 2 (primo)");
        exit(0); // <stdlib.h> - cancela a execução do programa
    }

    fim = floor(sqrt(n)); // ultimo divisor possível para n
    k = 3; // primeiro divisor
    p = (n & 1); // n>2 é ímpar?
    // se p==1 então n>2 é ímpar e pode ser primo

    while ((p) && (k<=fim)) {
        p = (n % k); // se p==0 então n>2 é dívisivel por k
        k += 2; // k = k + 2; próximo divisor ímpar
    } // while

    if (p) { printf("\n %d (primo)", n); }
    else { printf("\n %d (nao-primo)", n); }

    return 0;
}