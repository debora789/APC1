#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_ITENS 50
#define RED "\033[1;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

int main() {
   setlocale(LC_ALL, "Portuguese");

    char itens[MAX_ITENS][50];
    int quantidades[MAX_ITENS];
    float precos[MAX_ITENS];
    float totais[MAX_ITENS];

    int contador = 0;
    int opcao;

    do {
        // Menu principal
        printf(GREEN "\n============= MENU NOTA FISCAL =============\n" RESET);
        printf(YELLOW "1 - Adicionar item\n" RESET);
        printf(YELLOW "2 - Gerar lista (nota fiscal)\n" RESET);
        printf(YELLOW "3 - Sair\n" RESET);
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o enter do buffer

        switch(opcao) {
            case 1:
                if (contador >= MAX_ITENS) {
                    printf(RED "Limite de itens atingido!\n" RESET);
                    break;
                }

                printf("Nome do item: ");
                fgets(itens[contador], 50, stdin);
                itens[contador][strcspn(itens[contador], "\n")] = 0; // Remove o \n

                printf("Quantidade: ");
                scanf("%d", &quantidades[contador]);

                printf("Preço unitário: R$");
                scanf("%f", &precos[contador]);

                totais[contador] = quantidades[contador] * precos[contador];
                contador++;

                printf(GREEN "Item adicionado com sucesso!\n" RESET);
                break;

            case 2:
                if (contador == 0) {
                    printf(RED "\nNenhum item na nota fiscal.\n" RESET);
                    break;
                }

                printf(GREEN "\n==============================================" RESET "\n");
                printf(RED   "=============== NOTA FISCAL ==================" RESET "\n");
                printf(GREEN "==============================================" RESET "\n");
                printf(YELLOW "%-4s %-25s %-10s %-10s %-10s\n" RESET, "NÂº", "Item", "Qtd", "PreÃ§o", "Total");

                float total_geral = 0.0;
                for (int i = 0; i < contador; i++) {
                    printf("%-4d %-25s %-10d R$%-8.2f R$%-8.2f\n",
                           i + 1, itens[i], quantidades[i], precos[i], totais[i]);
                    total_geral += totais[i];
                }

                printf(GREEN "\nTotal Geral: R$%.2f\n" RESET, total_geral);
                break;

            case 3:
                printf(GREEN "\nEncerrando o programa. AtÃ© logo!\n" RESET);
                break;

            default:
                printf(RED "OpÃ§Ã£o invÃ¡lida! Tente novamente.\n" RESET);
                break;
        }

    } while (opcao != 3);

    return 0;
}