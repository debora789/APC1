#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_ITENS 50
#define RED "\033[1;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"


typedef struct {
    char nome[50];
    int quantidade;
    float preco;
    float total;
} Item;

int main() {
    setlocale(LC_ALL, "Portuguese");

    Item itens[MAX_ITENS];  // Array de structs
    int contador = 0;
    int opcao;

    do {
        // Menu principal
        printf(GREEN "\n============= MENU NOTA FISCAL =============\n" RESET);
        printf(YELLOW "1 - Adicionar item\n" RESET);
        printf(YELLOW "2 - Gerar nota fiscal\n" RESET);
        printf(YELLOW "3 - Sair\n" RESET);
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o enter do buffer

        switch(opcao) {
            case 1:
                if (contador >= MAX_ITENS) {
                    printf(RED "Limite de itens atingido!\n" RESET);
                    break;
                }

                printf("Nome do item: ");
                fgets(itens[contador].nome, 50, stdin);
                itens[contador].nome[strcspn(itens[contador].nome, "\n")] = 0;

                printf("Quantidade: ");
                scanf("%d", &itens[contador].quantidade);

                printf("Preco unitario: R$");
                scanf("%f", &itens[contador].preco);

                itens[contador].total = itens[contador].quantidade * itens[contador].preco;
                contador++;

                printf(GREEN "Item adicionado com sucesso!\n" RESET);
                break;

            case 2:
                if (contador == 0) {
                    printf(RED "\nNenhum item na nota fiscal.\n" RESET);
                    break;
                }

                printf(GREEN "\n===============================================================" RESET "\n");
                printf(RED   "========================= NOTA FISCAL =========================" RESET "\n");
                printf(GREEN "===============================================================" RESET "\n");
                printf(YELLOW "%-4s %-25s %-10s %-10s %-10s\n" RESET, "Num.",  "Item", "Qtd", "Preco", "Total");

                float total_geral = 0.0;
                for (int i = 0; i < contador; i++) {
                    printf("%-4d %-25s %-10d R$%-8.2f R$%-8.2f\n",
                           i + 1, itens[i].nome, itens[i].quantidade, itens[i].preco, itens[i].total);
                    total_geral += itens[i].total;
                }

                printf(GREEN "\nTotal Geral: R$%.2f\n" RESET, total_geral);
                break;

            case 3:
                printf(GREEN "\nEncerrando o programa!\n" RESET);
                break;

            default:
                printf(RED "Opcao invalida! Tente novamente.\n" RESET);
                break;
        }

    } while (opcao != 3);

    return 0;
}