#include <stdio.h>

int main(){

    int nro;

    printf("Digite numero: ");
    scanf("%d", &nro);

    if(nro >= 16 && nro < 18){
        printf("Grupo A\n");
    }else{
        if(nro >= 18 && nro < 50){
            printf("Grupo B\n");
        }else{
            if(nro >= 50 && nro < 65){
                printf("Grupo C\n");
            }else{
                printf("Numero esta fora do intervalo!\n");
            }
        }
    }


    return 0;
}
