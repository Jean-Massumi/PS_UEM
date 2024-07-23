#include<stdio.h>

// Entendendo o ponteiro e endereços

void main (){
    int* p1;
    float* p2;
    double* p3;
    
    int a = 10;
    float b = 3.4;
    double c = 10.0/3;
    printf("\n");

    printf("Valores Anteriores dos Endereços apontados pelos Ponteiros:\n");
    printf("Valor p1 = %p \n", p1);
    printf("Valor p2 = %p \n", p2);
    printf("Valor p3 = %p \n", p3);
    printf("\n");

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Valores Após atribuição dos Endereços apontados pelos Ponteiros:\n");
    printf("Valor p1 = %p \n", p1);
    printf("Valor p2 = %p \n", p2);
    printf("Valor p3 = %p \n", p3);
    printf("\n");

    printf("Valores das variaveis \n");
    printf("Valor de a = %d \n", a); 
    printf("Valor de b = %.2f \n", b);
    printf("Valor de c = %.2f \n \n", c);

    printf("Endereçamento das variaveis em Hexadecimal \n");
    printf("Valor de a = %p \n", &a);
    printf("Valor de b = %p \n", &b);
    printf("Valor de c = %p \n \n ", &c);

}
