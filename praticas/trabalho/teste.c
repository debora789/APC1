#include <stdio.h>
#include <string.h>

#define MAX_ITENS 15
#define RED "\033[1;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

int main() {
    // Dados dos materiais
    char nomes[MAX_ITENS][50] = {
        "Cimento", "Areia", "Brita", "Bloco de Concreto", "Tijolo",
        "Cal Hidratada", "Vergalhao", "Prego", "Parafuso", "Tinta",
        "Massa Corrida", "Canaleta", "Caibro", "Telha", "Argamassa"};

    float precos[MAX_ITENS] = {
        35.00, 80.00, 75.00, 3.50, 0.90,
        25.00, 22.00, 10.00, 15.00, 120.00,
        45.00, 8.00, 30.00, 12.00, 20.00};

    // Definindo unidades e tamanhos (fictícios)
    char unidades[MAX_ITENS][20] = {
        "saco", "m³", "m³", "un", "un",
        "saco", "barra", "kg", "un", "litro",
        "balde", "un", "m", "un", "kg"};

    char tamanhos[MAX_ITENS][20] = {
        "50kg", "1m³", "1m³", "39x19x14", "9x19x19",
        "20kg", "8mm", "1kg", "5cm", "18L",
        "20kg", "50cm", "3m", "2m", "20kg"};

    float impostos[MAX_ITENS] = {0};
    float totais[MAX_ITENS] = {0};
    int quantidades[MAX_ITENS] = {0};

    printf(GREEN "==============================================" RESET "\n");
    printf(RED   "================= NOTA FISCAL ================" RESET "\n");
    printf(GREEN "==============================================" RESET "\n");
    printf(YELLOW "%-15s %-10s %-10s %-10s\n" RESET, "Item", "Qtd", "Prc", "Valor");

    char itens[MAX_ITENS][50] = {
        "Cimento", "Argamassa", "Tabica", "Esquadria de Aluminio", "Esquadria de Madeira",
        "Macaneta", "Roseta", "Piso Porcelanato", "Revestimento Ceramico", "Engate Flexivel",
        "Sifao", "Cuba", "Torneira", "Tomada", "Guarda Corpo",
        "Exaustor", "Dobradiça", "Parafusos", "Silicone", "Rejunte", "Arremate"
    };

    // Quantidades variadas (exemplo fictício)
    int quantidades[MAX_ITENS] = {
        10, 20, 15, 4, 3,
        12, 12, 30, 25, 10,
        5, 4, 6, 20, 2,
        1, 16, 100, 8, 18, 6
    };

    // Preços unitários (exemplo fictício)
    float precos[MAX_ITENS] = {
        35.00, 20.00, 5.50, 450.00, 380.00,
        25.00, 4.00, 65.00, 35.00, 18.00,
        22.00, 150.00, 90.00, 7.50, 600.00,
        200.00, 3.00, 0.50, 18.00, 6.00, 12.00
    };

    float totais[MAX_ITENS];
    float total_geral = 0.0;

    // Cabeçalho
    printf(GREEN "\n==================== MENU DE ITENS ====================\n" RESET);
    printf(YELLOW "%-4s %-30s %-10s %-10s %-10s\n" RESET, "Nº", "Item", "Qtd", "Preço", "Total");

    // Listagem com cálculo de totais
    for (int i = 0; i < MAX_ITENS; i++) {
        totais[i] = quantidades[i] * precos[i];
        total_geral += totais[i];

        printf("%-4d %-30s %-10d R$%-8.2f R$%-8.2f\n",
               i + 1, itens[i], quantidades[i], precos[i], totais[i]);
    }

    // Total geral
    printf(GREEN "\nTotal Geral da Compra: R$%.2f\n" RESET, total_geral);

    return 0;
}

