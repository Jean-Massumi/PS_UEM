#include<stdio.h>;

// Passagem por paramêtros

void icms(int valorMercadoria);

void main(){
    int valorMercadoria;
    
    printf("\nInforme o valor da mercadoria: ");
    scanf("%d", &valorMercadoria);
    printf("\nValor antes do icms: %d", valorMercadoria);
    icms(valorMercadoria);
    printf("\nValor depois do icms: %d", valorMercadoria);
    icms(valorMercadoria);
    printf("\nValor depois depois do icms: %d", valorMercadoria);
}

void icms(int valorMercadoria){
    valorMercadoria *= 17;
    printf("\nO valor do icms é: %d", valorMercadoria);

}
