#include <stdio.h>

int main(){

    char letra;
    scanf("%c", &letra);

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vogal\n");
            break;
        default:
            printf("Consoante\n");
    }

    return 0;
}
