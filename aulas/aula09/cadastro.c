#include <stdio.h>
#include <string.h>

int main()
{
    struct endereco_t {
        char logradouro[61];
        int numero;
        char bairro[41];
        char cidade[41];
        char uf[3];
        int cep;
    };

    struct cliente_t
    {
        char nome[101];
        long long int telefone;
        char email[101];
        struct endereco_t endereco;
    };

    struct fornecedor_t {
        struct endereco_t endereco;
    };

    struct cliente_t cliente;

    strcpy(cliente.nome, "Jose");
    cliente.telefone = 6199999999L;
    strcpy(cliente.email, "jose@iesb.br");
    strcpy(cliente.endereco.logradouro, "SQS");
    cliente.endereco.numero = 612;
    strcpy(cliente.endereco.bairro, "Asa sul");
    strcpy(cliente.endereco.cidade, "Brasilia");
    strcpy(cliente.endereco.uf, "DF");
    cliente.endereco.cep = 70000000;   


    struct cliente_t clientes[10];

    for(int i=0; i<10; i++) {
        printf("Dados do cliente %i\n", i+1);
        printf("Nome do cliente: ");
        scanf("%[^\n]s", clientes[i].nome);
        printf("Telefone do cliente: ");
        scanf("%lli", &clientes[i].telefone);
        printf("E-mail do cliente: ");
        scanf("%[^\n]s", clientes[i].email);
        printf("Endereco do cliente:\n");
        printf("Logradouro: ");
        scanf("%[^\n]s", clientes[i].endereco.logradouro);
        printf("Numero: ");
        scanf("%i", &clientes[i].endereco.numero);
        printf("Bairro: ");
        scanf("%[^\n]s", clientes[i].endereco.bairro);
        printf("Cidade: ");
        scanf("%[^\n]s", clientes[i].endereco.cidade);
        printf("UF: ");
        scanf("%[^\n]s", clientes[i].endereco.uf);
        printf("CEP: ");
        scanf("%i", &clientes[i].endereco.cep);
    }

    return 0;
} 