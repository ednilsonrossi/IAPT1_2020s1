#include <stdio.h>

int main(){

    int cpf_p1, cpf_p2, cpf_p3, cpf_digitos;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, v1, v2;
    int calculo_v1, calculo_v2;
    int resto_v1, resto_v2;

    printf("Informe o CPF (xxx.xxx.xxx-xx): ");
    scanf("%d.%d.%d-%d", &cpf_p1, &cpf_p2, &cpf_p3, &cpf_digitos);

    if(cpf_p1 == cpf_p2 && cpf_p1 == cpf_p3){
        printf("CPF inválido.\n");
    }else{
        d1 = cpf_p1 / 100;
        cpf_p1 = cpf_p1 % 100;
        d2 = cpf_p1 / 10;
        d3 = cpf_p1 % 10;

        d4 = cpf_p2 / 100;
        cpf_p2 = cpf_p2 % 100;
        d5 = cpf_p2 / 10;
        d6 = cpf_p2 % 10;

        d7 = cpf_p3 / 100;
        cpf_p3 = cpf_p3 % 100;
        d8 = cpf_p3 / 10;
        d9 = cpf_p3 % 10;

        v1 = cpf_digitos / 10;
        v2 = cpf_digitos % 10;

        calculo_v1 = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2;

        calculo_v2 = d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9 * 3 + v1 * 2;

        resto_v1 = (calculo_v1 * 10) % 11;
        if(resto_v1 == 10){
            resto_v1 = 0;
        }

        resto_v2 = (calculo_v2 * 10) % 11;
        if(resto_v2 == 10){
            resto_v2 = 0;
        }

        if(v1 == resto_v1 && v2 == resto_v2){
            printf("CPF é válido.\n");
        }else{
            printf("CPF é inválido.\n");
        }
    }
    return 0;
}