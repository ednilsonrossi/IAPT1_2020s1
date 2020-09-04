#include <stdio.h>

int main(){

    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario > 1500){
        salario = salario + 25;
    }else{
        if(salario >= 750){
            salario = salario + 50;
        }else{
            if(salario >= 450){
                salario = salario + 75;
            }else{
                salario = salario + 100;
            }
        }
    }

    printf("%.2f", salario);
    return 0;
}
