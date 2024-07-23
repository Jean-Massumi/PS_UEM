#include <stdio.h>

void icms(float *valorMercadoria);

void main()
{
    float valoMercadoria;
    printf("\nInforme o valor da mercadoria: ");
    scanf("%f", &valoMercadoria);

    printf("\nValor antes do icms: %.2f", valoMercadoria);
    icms(&valoMercadoria);
    
    printf("\nValor depois do icms: %.2f", valoMercadoria);
    icms(&valoMercadoria);
    
    printf("\nValor depois depois do icms: %.2f", valoMercadoria);
    printf("\nVALOR ICMS MAIS UMA VEZ (170*17): %p", valoMercadoria);
    printf("\nENDERECO NA FUNCAO MAIN: %X", &valoMercadoria);
}

void icms(float *valorMercadoria)
{
    *valorMercadoria *= 0.17;
    printf("\nO valor do icms dentro da função é: %.2f", *valorMercadoria);
    printf("\nENDERECO DENTRO DA FUNCAO ICMS: %X", &valorMercadoria);
    printf("\n");
}