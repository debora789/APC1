#include <stdio.h>

int main() {
    float notas[10];         
    float soma = 0.0f;        
    float media = 0.0f;       
    int qtde_acima_media = 0; 

    
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);  
        soma += notas[i];        
    }

    media = soma / 10;  

    
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {   
            qtde_acima_media++;   
        }
    }

   
    printf("\nMedia da turma: %.2f\n", media);
    printf("Quantidade de alunos com nota acima da media: %d\n", qtde_acima_media);

    return 0;
}