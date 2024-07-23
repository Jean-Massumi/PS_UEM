#include<stdio.h>;

// Ponteiros (*) e Endereçamento (&)

int main(void){
    int a = 5;
    int* p = &a;

    printf("Valor de a = %d\n", a);
    printf("Endereco de a = %p\n", (void*)&a);
    printf("Valor armazenado no ponteiro p = %p\n", (void*)p);
    printf("Valor acessado pelo ponteiro p = %d\n", *p);
    
    *p = 7;
    printf("Novo valor de a = %d\n", a);
    
    return 0;

}