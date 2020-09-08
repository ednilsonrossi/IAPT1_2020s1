#include <stdio.h>

int main(){

    int nro, parte1, parte2, soma, potencia;

    printf("Digite número com 4 digitos: ");
    scanf("%d", &nro);

    parte1 = nro / 100;
    parte2 = nro % 100;

    soma = parte1 + parte2;

    potencia = soma * soma;

    if(nro == potencia)
        printf("O número %d tem a característica.\n", nro);
    else
        printf("O número %d não tem a característica.\n", nro);
    

    return 0;
}
