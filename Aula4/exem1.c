#include <stdio.h>

int main(void) {
    char opcao = 'D';

    switch (opcao) {
        case 'A':
        printf("Escolheu A.\n");
        break;

        case 'B':
        printf("Escolheu B.\n");
        break;

        case 'C':
        printf("Escolheu C.\n");
        break;

        default:
        printf("Opção inválida.\n");
    }
    return 0;
}