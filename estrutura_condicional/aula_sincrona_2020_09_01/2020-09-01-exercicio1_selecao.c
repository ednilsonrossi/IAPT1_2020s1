#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch(mes){
        case 1:
            printf("Araraquara, %d de janeiro de %d. ", dia, ano);
            break;
        case 2:
            printf("Araraquara, %d de fevereiro de %d. ", dia, ano);
            break;
        case 3:
            printf("Araraquara, %d de março de %d. ", dia, ano);
            break;
        case 4:
            printf("Araraquara, %d de abril de %d. ", dia, ano);
            break;
        case 5:
            printf("Araraquara, %d de maio de %d. ", dia, ano);
            break;
        case 6:
            printf("Araraquara, %d de junho de %d. ", dia, ano);
            break;
        case 7:
            printf("Araraquara, %d de julho de %d. ", dia, ano);
            break;
        case 8:
            printf("Araraquara, %d de agosto de %d. ", dia, ano);
            break;
        case 9:
            printf("Araraquara, %d de setembro de %d. ", dia, ano);
            break;
        case 10:
            printf("Araraquara, %d de outubro de %d. ", dia, ano);
            break;
        case 11:
            printf("Araraquara, %d de novembro de %d. ", dia, ano);
            break;
        case 12:
            printf("Araraquara, %d de dezembro de %d. ", dia, ano);
            break;
        default:
            printf("Mes invalido!!!");
            break;
    }

    return 0;
}
