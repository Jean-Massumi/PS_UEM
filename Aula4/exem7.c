#include <stdio.h>
// por sugestão do aluno: Alexandre Tonet Herman

int mult_int(int n1, int n2){
    // assumindo que:
    int menor = n2, maior = n1;

    if(n1 <= n2){ //assumiu certo?
        int menor = n1;
        int maior = n2;
    }   

    if(menor == 1) return maior;
    if(menor == 0) return 0;

    // fazer a multiplicação egípcia.
    // Ver link: https://www.youtube.com/watch?v=cthD9-QDmHM

    int mult = 0; // acumulador das multiplicações

    while(menor){ // pra menor não zero
        // acumular maior, se menor for ímpar

        if ( menor&1 ) mult += maior;
        
        menor >>= 1; //dividir menor por 2
        maior <<= 1; //multiplicar maior por 2
    }

    return mult;
}

void main(){
    int a = 21;
    int b = 17;
    int result = mult_int(a,b);

    printf("%d x %d = %d \n",a,b,result);
}