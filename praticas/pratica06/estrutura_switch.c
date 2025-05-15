#include <stdio.h>

int main()
{
    int nota;

    printf("Informe a numero ");
    scanf("%i", &nota);

    getchar();
    switch (nota)
    {
    case 1:
        printf("Voce ganhou 'bolo'.\n");
        break;
    case 2:
        printf("Voce ganhou 'dois bolos'.\n");
        break;
    case 3:
        printf("Voce ganhou 'tres bolos'.\n");
        break;
    case 4:
        printf("Voce ganhou quatro bolos!\n");
        break;
    case 5:
        printf("Voce ganhou um bolaum!\n");
        break;
    default:
        printf("Naum ganhou! Tente novamente.\n");
        break;
    }

    return 0;
}
