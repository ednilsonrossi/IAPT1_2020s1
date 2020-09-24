#include <stdio.h>

int main(){

    int idade, soma, passo, nao_sei;

    soma = 0;
    passo = 1;

    printf("Digite a quantidade de idades: ");
    scanf("%d", &nao_sei);


    while(passo <= nao_sei)
    {
        printf("Digite %dº idade: ", passo);
        scanf("%d", &idade);

        soma = soma + idade;

        passo = passo + 1;
    }//Fim-enquanto

    printf("Soma das idades: %d\n\n", soma);

    return 0;
}