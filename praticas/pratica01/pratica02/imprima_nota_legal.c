#include <stdio.h>

int main() {
    printf("==============================================\n");
    printf("           N O T A    L E G A L \n");
    printf("==============================================\n");
    printf("Item            Qtd         Prc      Valor\n");
    printf("%-15s %03i %12.2f %9.2f\n", "Camiseta", 2,      39.99 );
    printf("%-15s %03i %12.2f %9.2f\n", "Calça",    1,       89.90);
    printf("%-15s %03i %12.2f %9.2f\n", "Meia Social",       3,      19,99);
    printf("==============================================\n");
    printf("                            TOTAL: R$ %5.2f\n", 229.85);
    return 0;
}