#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // INPUT: um numero inteiro positivo ou negativo
    int r; // Qual o valor do bit menos significativo do valor inteiro
    int i; // Contador de deslocamento dos bits
  
    printf("Digite o numero inteiro (positivo ou negativo): ");
    scanf("%d", &n);
    // Converte numeros inteiros para binário correspondente de 32 bits.

    for (i = 7; i >= 0; i--)
    {
        r = n >> i; // Realizar um shift right para deslocar o i-ésimo bit
        // de n para a posição menos significativa da word.

        if (r & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

}