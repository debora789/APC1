#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
// unsigned char -> 0 a 255

// unsigned int -> 0 a 4bi
// short int -> -32mil a 32mil
// unsigned short int -> 0 a 65mil
// long int -> -nonilhoes a nonilhoes
// unsigned long int -> 0 ~ 18lhao

// long double -> quase 0 a um numero que não sei pronunciar
printf("o tipo 'short int' ocupa %i bytes\n", sizeof(short int));
printf("o tipo 'long int' ocupa %i bytes\n", sizeof(long int));
printf("o tipo 'long double' ocupa %i bytes\n", sizeof(long double));

printf("o tipo 'unsigned char' vai de 0 a %i\n", UCHAR_MAX);
printf("o tipo 'unsigned int' vai de 0 a %u\n", UINT_MAX);
printf("o tipo 'short int' vai de %i a %i\n", SCHAR_MIN, SCHAR_MAX);
printf("o tipo 'unsigned short int' vai de 0 a %i\n", USHRT_MAX);
printf("o tipo 'long int' vai de %i a %i\n", LONG_MIN, LONG_MAX);
printf("o tipo 'unsugned long int' vai de 0 a %u\n", ULONG_MAX);
printf("o tipo 'long double' vai de %E a %E\n", LDBL_MIN, LDBL_MAX);




    return 0;
}