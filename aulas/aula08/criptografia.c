#include <stdio.h>


int main() {
char frase [30] = "Eu programo em C"; 


for(int i=0; i<30; i++) {
    printf("%c", frase[i]);
}


printf("\n");
printf("%s\n", frase);


printf("Entre com uma frase:   ");
scanf("%[^\n]s", frase);
while (getchar() != '\n');

char cesar [6] [5];
int k=0;
for(int i=0; i<6; i++){
    for(int j=0; j<5; j++){
        cesar [i][j] = frase [k];
        k++;
    }
}

printf("Sua frase codificada:  ");
for(int j=0; j<5; j++){
    for(int i=0; i<6; i++){
        printf("%c", cesar [i][j]);
    }
}
printf("\n");

//  0 1 2 3 4 
// 0 E u   p r
// 1 o g r a m
// 2 o   e m  
// 3 C
// 4
// 5
// 6

//"EooC ug re pam rm"

    return 0;
}