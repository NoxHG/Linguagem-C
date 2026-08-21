// CARRINHO DE SUPERMERCADO SIMPLES

/*
    Oque vou precisar?
    1. Preco dos itens
    2. Quantia dos itens
    3. Carrinho de compras
    4. Itens
    5. Interface
    6. Confirmacao
*/

#include <stdio.h>

int main(void)
{

    // Variaveis

    int quantidade = 0;
    float preco[10] =
        {
            6.50,
            8.90,
            5.99,
            2.50,
            7.50,
            9.00,
            35.90,
            29.90,
            15.90,
            18.50};

    char nome[50] = "";
    int item = 0;
    char itens[10][50] =
        {"Arroz Parbolizado",
         "Feijao Enlatado",
         "Macarrao",
         "Miojo",
         "Energetico",
         "Coca-Cola",
         "Carne Bovina",
         "Carne Suina",
         "Frango",
         "Carne Ultraprocessada"};

    // Inputs Necessarios

    printf("Ola bom dia, por favor, informe seu Primeiro nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Interface

    printf("Bom dia! %s \n", nome);
    printf("################################ \n");
    printf("Itens a venda: \n");
    printf("Cereais | Carnes | Bebidas \n");
    printf("1. %s | 2. %s |3. %s \n", itens[0], itens[6], itens[4]);
    printf("4. %s | 5. %s | 6. %s \n", itens[1], itens[7], itens[5]);
    printf("7. %s | 8. %s \n", itens[2], itens[8]);
    printf("9. %s | 10. %s \n", itens[3], itens[9]);

    printf("################################ \n");
    printf("Selecione sua opcao: \n");
    scanf("%d", &item - 1);
    printf("Informe a quantidade: \n");
    scanf("%d", &quantidade);

    printf("################################ \n");
    printf("Voce comprou %dx %s, totalizando R$ %.2f \n", quantidade, itens[item - 1], quantidade * preco[item - 1]);
    return 0;
}