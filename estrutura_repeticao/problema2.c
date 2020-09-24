#include <stdio.h>

int main(){

    int idade, soma, passo;

    soma = 0;
    passo = 1;

    while(passo <= 10)
    {
        printf("Digite %dº idade: ", passo);
        scanf("%d", &idade);

        soma = soma + idade;

        passo = passo + 1;
    }//Fim-enquanto

    printf("Soma das idades: %d\n\n", soma);

    return 0;
}