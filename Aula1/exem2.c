#include<stdio.h>

void main() {
    int*iptr; // ponteiro para integer datatype.
    int a = -8;
    iptr = &a;
    
    printf("\n Valor de iptr = %p", iptr);
    printf("\n Endereço de a = %p (hexadecimal)",&a);
    // printf("\n Endereço de a = %lld(decimal)", &a);

    printf("\n Valor armazenado em a = %d ", a);
    printf("\n Valor apontado por iptr (*iptr) = %d ", *iptr);

    printf("\n tamanho do inteiro [sizeof(int)] = %d (bytes)", sizeof(int));
    printf("\n tamanho do ponteiro para inteiro [sizeof(int*)] = %d (bytes)", sizeof(int*));

    printf("\n tamanho do float [sizeof(float)] = %d (bytes)", sizeof(float));
    printf("\n tamanho do ponteiro para float [sizeof(float*)] = %d (bytes)", sizeof(float*));
    printf("\n \n");

    printf("\n Valor armazenado em a = %d", a);
    printf("\n Valor apontado por iptr (*iptr) = %d", *iptr);
    printf("\n");
    
    a = a / 2; // dividir a por 2
    printf("\n Valor armazenado em a = %d", a);
    printf("\n Valor apontado por iptr (*iptr) = %d", *iptr);
    printf("\n");

    *iptr = -4 * (*iptr); // multiplicar o valor apontado por iptr por (-4)
    printf("\n Valor armazenado em a = %d", a);
    printf("\n Valor apontado por iptr (*iptr) = %d", *iptr);
    printf("\n \n");

}