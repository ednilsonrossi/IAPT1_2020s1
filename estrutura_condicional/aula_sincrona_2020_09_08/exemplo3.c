#include <stdio.h>

int main(){

    int nro;

    printf("Digite numero: ");
    scanf("%d", &nro);

    if(nro < 16 || nro > 65){
        printf("Numero esta fora do intervalo!\n");
    }else{
        if(nro >= 16 && nro < 18){
            printf("Grupo A\n");
        }else{
            if(nro < 50){
                printf("Grupo B\n");
            }else{
                printf("Grupo C\n");
            }
        }
    }

    return 0;
}
