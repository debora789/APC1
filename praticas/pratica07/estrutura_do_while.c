#include <stdio.h>

int main() {
    int nota;

    printf("entre com uma nota de 1 a 10: ");
    scanf("%i", &nota);


    do {
        printf("entre com uma nota de 1 a 10: ");
        scanf("%i", &nota);
        if(nota <1 || nota > 10) {
        printf("Nova invalida. Tente novamente!\n");    
        }
    } while(nota < 1 || nota > 10);
    
    
    return 0;
}
