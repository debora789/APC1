#include <stdio.h>

int main() {
   int numero;
   int fatorial;

printf("entre com um numero ");
scanf("%i", &numero);

for (int i=numero; i>0; i--){
    fatorial = fatorial * i;
}






    return 0;
}