#include <stdio.h>

int main(){

    int nro, centena, dezena, unidade, soma;

    printf("Digite número de 0 a 999\n");
    scanf("%d", &nro);

    //Verificação se o número é inválido.
    //ATENÇÃO: Foi utilizado o operador lógico OU porque os valores inválidos
    //estão fora da faixa de valor, lembre-se não existe nenhum número que seja
    //menor que zero e maior que 999.
    if(nro < 0 || nro > 999){
        printf("Número digitado é inválido.\n");
    }else{
        centena = nro / 100;
        nro = nro % 100;
        dezena = nro / 10;
        unidade = nro % 10;
        soma = centena + dezena + unidade;
        printf("Soma dos digitos: %d\n", soma);
    }

    return 0;
}