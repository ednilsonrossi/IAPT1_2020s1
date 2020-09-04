#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if(mes == 1){
        printf("Araraquara, %d de janeiro de %d. ", dia, ano);
        printf("\n");
    }else if(mes == 2)
        printf("Araraquara, %d de fevereiro de %d. ", dia, ano);
    else if(mes == 3)
        printf("Araraquara, %d de março de %d. ", dia, ano);
    else if(mes == 4)
        printf("Araraquara, %d de abril de %d. ", dia, ano);
    else if(mes == 5)
        printf("Araraquara, %d de maio de %d. ", dia, ano);
    else if(mes == 6)
        printf("Araraquara, %d de junho de %d. ", dia, ano);
    else if(mes == 7)
        printf("Araraquara, %d de julho de %d. ", dia, ano);
    else if(mes == 8)
        printf("Araraquara, %d de agosto de %d. ", dia, ano);
    else if(mes == 9)
        printf("Araraquara, %d de setembro de %d. ", dia, ano);
    else if(mes == 10)
        printf("Araraquara, %d de outubro de %d. ", dia, ano);
    else if(mes == 11)
        printf("Araraquara, %d de novembro de %d. ", dia, ano);
    else if(mes == 12)
        printf("Araraquara, %d de dezembro de %d. ", dia, ano);
    else{
        printf("Mes invalido!!!");
        printf("Viva o Maximo");
    }

    return 0;
}
