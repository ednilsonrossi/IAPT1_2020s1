#include <stdio.h>

int main(){


    int n;
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terca\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("ERRO\n");
    }

    /*
    if(n == 1){
        printf("Domingo\n");
    }else{
        if(n == 2){
            printf("Segunda\n");
        }else{
            if(n == 3){
                printf("Terca\n");
            }else{
                if(n == 4){
                    printf("Quarta\n");
                }else{
                    if(n == 5){
                        printf("Quinta\n");
                    }else{
                        if(n == 6){
                            printf("Sexta\n");
                        }else{
                            if(n == 7){
                                printf("Sabado\n");
                            }else{
                                printf("ERRO\n");
                            }
                        }
                    }
                }
            }
        }
    }*/

    return 0;
}
