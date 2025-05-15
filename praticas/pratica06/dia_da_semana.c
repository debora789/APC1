#include <stdio.h>

int main() {
int dia;




printf("1 - Domingo\n");
printf("2 - Segunda\n");
printf("3 - Terca\n");
printf("4 - Quarta\n");
printf("5 - Quinta\n");
printf("6 - Sexta\n");
printf("7 - Sabado\n");
printf("Escolha um dia: ");

scanf("%i", &dia);

// if (dia == 1) {
//     printf ("Domingo\n");
// } else if (dia == 2) {
//     printf("Segunda");
// } else if (dia == 3) {
//     printf("Terca\n");
// } else if (dia == 4) {
//     printf("Quarta\n");
// } else if (dia == 5) {
//     printf("Quinta\n");
// }else if (dia == 6) {
//     printf("Sexta\n");
// }else if (dia == 7) {
//     printf("Sabado\n");
// }  else {
//     printf("Opcao invalida. Tente novamente!\n");
// }

getchar();
switch (dia){
    case 1: printf ("Domingo\n"); break;
    case 2: printf("Segunda"); break;
    case 3: printf("Terca\n"); break;
    case 4: printf("Quarta\n"); break;
    case 5: printf("Quinta\n"); break;
    case 6: printf("Sexta\n"); break;
    case 7: printf("Sabado\n"); break;
    default: printf("Opcao invalida. Tente novamente!\n"); break;

}


    return 0;
}