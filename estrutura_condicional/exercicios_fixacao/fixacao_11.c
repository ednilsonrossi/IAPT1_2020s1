#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Digite duas notas: \n");
    scanf("%f%f", &nota1, &nota2);

    //Com as notas lidas vou realizar a validação das notas. 
    //Na estrutura IF estou indicando 4 condições, os valores
    //devem satisfazer todas as condições para que o bloco 
    //então seja executado, caso alguma consição falhe o 
    //programa executa o ELSE. Atenção para o uso do operador
    //lógico E para unir as condições.

    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
        //ENTÃO
        media = (nota1 + nota2) / 2;
        printf("Média: %.2f\n", media);
    }else{
        //SENÃO
        printf("Foi digitada nota inválida!\n\n");
    }

    return 0;
}