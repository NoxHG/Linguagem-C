#include <stdio.h>
#include <string.h>

int main() {

    // Dados

    char noun[50] = "";
    char verb[50] = "";
    char adjc1[50] = "";
    char adjc2[50] = "";
    char adjc3[50] = "";

    // Inputs

    printf("Digite um adjetivo (descricao): ");
    fgets(adjc1, sizeof(adjc1), stdin);
    adjc1[strcspn(adjc1, "\n")] = '\0'; // Remove newline character

    printf("digite um substantivo (coisa): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = '\0';

    printf("Digite um substantivo (descricao): ");
    fgets(adjc2, sizeof(adjc2), stdin);
    adjc2[strcspn(adjc2, "\n")] = '\0';

    printf("Digite um verbo (acabando c/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = '\0';

    printf("Digite um adjetivo (descricao): ");
    fgets(adjc3, sizeof(adjc3), stdin);
    adjc3[strcspn(adjc3, "\n")] = '\0';

    // Outputs

    printf("hoje eu fui ao zoologico %s \n", adjc1);
    printf("na exibicao eu vi um %s \n", noun);
    printf("%s estava %s e %s! \n", noun, adjc2, verb);
    printf("eu estava %s! \n", adjc3);

    return 0;
}