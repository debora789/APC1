#include <stdio.h>
#include <stdlib.h>

int main() {
int opcao = 0;  

while(opcao != 4) {
system("clear");
printf("---------------------------\n");
printf("|        MEU JOGO         |\n");
printf("---------------------------\n");
printf("|                         |\n");
printf("|    1 - Novo jogo        |\n");
printf("|    2 - Ver Score        |\n");
printf("|    3 - Sobre            |\n");
printf("|    4 - Sair             |\n");
printf("|                         |\n");
printf("---------------------------\n");
printf("Escolha uma opcao > ");
scanf("%i", &opcao);
while(getchar() != '\n');

switch (opcao) {
    case 1: {
        int nivel = 0;
        system("clear");
        printf("Novo Jogo\n\n");
        printf("Escolha um nivel\n");
        printf("1 - Facil\n");
        printf("2 - Medio\n");
        printf("3 - Dificil\n");
        printf("> ");
        scanf("%i", &nivel);
        break;
    }
    case 2:{
        system("clear");
        printf("Score do Jogo\n\n");
        printf("1 - Jogador A - 10000 pontod\n");
        printf("2 - Jogador B - 7000 pontod\n");
        printf("3 - Jogador C - 5000 pontod\n");
        printf("4 - Jogador D - 3000 pontod\n");
        printf("5 - Jogador E - 1000 pontod\n");
        printf("Pressione ENTER para continuar...");
        while(getchar() != 'n');
        break;
    }
    case 3:{
        system("clear");
        printf("Sobre o Jogo\n\n");
        printf("Desenvolvido em C\n");
        printf("Por um programador raiz\n");
        printf("Copyrigth (C) 2025\n\n");
        printf("Pressione ENTER para continuar...");
        while(getchar() != '\n');
        break;
    }
    case 4:{
        system("clear");
        printf("Ate logo!\n");
        break;
    }
    default: printf("Opcao invalida! Tente de novo. \n");

}
}
    return 0;
}