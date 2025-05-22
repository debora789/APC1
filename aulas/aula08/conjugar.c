#include <stdio.h> 
#include <string.h>

int main() { 
    // VERBO PROGRAM + AR
    // EU PROGRAM + O
    // TU PROGRAM + AS


    
char verbo[21];
char pronomes [6][5] = {"eu", "tu", "ele", "nos", "vos", "eles"};
char sufixos [6][5] = {"o", "as", "a", "amos", "ais", "am"};


printf("Entre com um verbo terminado em AR:  ");
scanf("%s", verbo);


int tamanho = strlen (verbo);
int ultima_posicao = tamanho -1;
int penultima_posicao = ultima_posicao -1;

if (verbo[penultima_posicao] == 'a' && verbo[ultima_posicao])

    return 0;
}