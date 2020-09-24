#include <stdio.h>

int main(){

    int idade, soma, contador;

    soma = 0;
    contador = 0;

    while(soma <= 500){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        soma = soma + idade;        //soma é uma variável acumuladora
        contador = contador + 1;    //contador é uma variável contadora
    }
    
    printf("Soma: %d\n", soma);
    printf("Quantidade de idades: %d\n\n", contador);
    printf("Media: %d\n\n", soma/contador);

    return 0;
}