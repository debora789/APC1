#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
   // char -> 'A', '\n', 100
   // int -> -123, 0, 222
   // float -> -100.123456, 0.0f 565,232564f
   // -> -1.12345678901234 0.0 2.12345678901234
   // void -> 

   printf("O tipo 'char' ocupa %i byte(s)\n", sizeof(char));
   printf("O tipo 'int' ocupa %i byte(s)\n", sizeof(int));
   printf("O tipo 'float' ocupa %i byte(s)\n", sizeof(float));
   printf("O tipo 'double' ocupa %i byte(s)\n", sizeof(double));
   printf("O tipo 'void' ocupa %i byte(s)\n", sizeof(void));

   printf("o tipo 'char' aceita valor de %i a %i\n", CHAR_MIN, CHAR_MAX);
   printf("o tipo 'int' aceita valor de %i a %i\n", INT_MIN, INT_MAX);
   printf("o tipo 'float' aceita valor de %E a %E\n", FLT_MIN, FLT_MAX);
   printf("o tipo 'double' aceita valor de %E a %E\n", DBL_MIN, DBL_MAX);

    return 0;
}