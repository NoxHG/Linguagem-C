#include <stdio.h>
#include <string.h>

int main()
{

    // Dados

    char item[50] = "";
    char moeda[] = "R$";
    int quantia = 0;
    float preco = 0.0f;
    float total = 0.0f;

    // Inputs

    printf("Qual item voce quer comprar?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Quantos voce quer?: ");
    scanf("%d", &quantia);

    printf("Qual o preco?: ");
    scanf("%f", &preco);

    // Outputs

    total = quantia * preco;

    printf("\nVoce comprou x%d %s/s. \n", quantia, item);
    printf("Preco Total: %s%.2f", moeda, total);

    return 0;
}