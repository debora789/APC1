#include <stdio.h>

int main() {
    int nota;
   
    printf("entre com uma nota de 1 a 10: ");
    scanf("%i", &nota);

    while (nota < 1 || nota > 10)
    { 
        printf("Nota Invalida. Tente novamente\n");
        scanf("%i", &nota);
    }
    
    return 0;
}