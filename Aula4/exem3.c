#include<stdio.h>;

void main(){
    int n = 5; // o identificador n é global.
    // o identificador cont é local ao for

    for(float cont = 1; n > 0; cont +=0.5) {
        printf("\nDigite o numero inteiro (positivo ou negativo): ");
        scanf("%d", &n);

        printf("\n n = %d ", n);
        printf("\n cont = %f ", cont);
    }
    // printf("\n cont = %f ", cont); // erro de compilação
    // ‘cont’ undeclared
    // comente ou remova essa linha do código
}