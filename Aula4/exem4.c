#include <stdio.h>

int main(void) {
    int n = 5, f, cont;
    f = 1;

    printf(" VALOR FATORIAL");
    for (cont = 1; cont <= n; cont ++) {
        f = f* cont;
        printf("\n %d    %d", cont, f);
    }

    printf("\n cont = %f ", cont);
    // neste código, cont é um identificador
    // global e o seu valor pode ser usado após o bloco que o manipulou.

    return 0;
}