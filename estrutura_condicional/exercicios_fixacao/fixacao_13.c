#include <stdio.h>

int main(){

    int x, y;

    printf("Digite coordenadas (X, Y): ");
    scanf("%d%d", &x, &y);

    if(x < 0 && y > 0){
        printf("Quadrante 1\n");
    }else{
        if(x > 0 && y > 0){
            printf("Quadrante 2\n");
        }else{
            if(x > 0 && y < 0){
                printf("Quadrante 3\n");
            }else{
                if(x < 0 && y < 0){
                    printf("Quadrante 4\n");
                }else{
                    if(x == 0 && y == 0){
                        printf("Está na Origem (0, 0)\n");
                    }else{
                        if(x == 0){
                            printf("Sobre o eixo Y\n");
                        }else{
                            printf("Sobre o eixo X\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}