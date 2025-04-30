#include <stdio.h>

int main() {


printf("MENU PRINCIPAL\n");
printf("1 - Consultar saldo\n");
printf("2 - Fazer recarga\n");
printf("3 - Ver Recados\n");
printf("4 - Ultimas chamadas\n");
printf("5 - Sair\n");
printf("Escolha uma opcao ->");

int opcao = 0;
scanf("%i", &opcao);

if (opcao == 1) {
    printf ("Seu saldo eh R$ 10.00\n");
} else if (opcao == 2) {
    printf("Digite 1 p/ 10.0, 2 p/ 20.0 ou 5 p/ 50,00");
} else if (opcao == 3) {
    printf("Voce naum tem recados\n");
} else if (opcao == 4) {
    printf("Voce ligou para 8888-8888\n");
} else if (opcao == 5) {
    printf("Obrigada pelo contato. Ate logo!\n");
} else {
    printf("Opcao invalida. Tente novamente!\n");
}
switch (opcao){
    case 1: printf ("Seu saldo eh R$ 10.00\n"); break;
    case 2: printf("Digite 1 p/ 10.0, 2 p/ 20.0 ou 5 p/ 50,00"); break;
    case 3: printf("Voce naum tem recados\n"); break;
    case 4: printf("Voce ligou para 8888-8888\n"); break;
    case 5: printf("Obrigada pelo contato. Ate logo!\n"); break;
    default: printf("Obrigada pelo contato. Ate logo!\n"); break;

}

    return 0;
}