#include <stdio.h>

int main(){

    float salario, valor_prestacao;
    int meses;

    printf("Digite Salario: ");
    scanf("%f", &salario);

    printf("Meses de trabalho: ");
    scanf("%d", &meses);

    printf("Valor da prestacao: ");
    scanf("%f", &valor_prestacao);

    if( (meses / 12) >= 5)
    {
        //ENTAO
        if(valor_prestacao <= salario * 30 / 100)
        {
            printf("Emprestimo aprovado.\n");
        }
        else
        {
            printf("Valor da prestacao muito alto.\n");
        }

    }
    else
    {
        //SENAO
        printf("Tempo de servico insuficiente!\n");
    }

    return 0;
}
