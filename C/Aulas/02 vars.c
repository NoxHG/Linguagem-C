#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declaração de variáveis
    int idade = 16;      // <- Variavel do tipo inteiro -> %d
    float altura = 1.64; // <- Variavel do tipo Float, pode ter casas decimais -> %f
    double peso = 89.2;  // <- Variavel do tipo Double, pode ter casas decimais -> %lf

    // entao... qual a diferenca entre float e double? simples.
    // float pode armazenar ate 7 casas decimais. enquanto double pode armazenar de 15 a 16 casas decimais.
    // Float = 7/8; Double = 15/16;

    char nome[] = "Heytor";

    /*
    char tamvem pode ser ultilzado para armazenar mais de um carctere, na estrutura:
    char variavel[] = "texto";
    char <- tipo de variavel.
    variavel <- nome da variavel.
    [] <- indica que a variavel e um vetor (ou array), ou seja, pode armazenar mais de um caractere.
    = <- operador de atribuicao.
    "texto" <- valor atribuido a variavel.
    */

    char comida[] = "Pizza";
    char bebida[] = "coca-cola";
    char sobremesa[] = "Sorvete";

    // agora trabalharemos com um arquivo diferente, um que vem direto do binario!

    bool isOnline = true; // <- Variavel do tipo booleano, pode ser true ou false -> %d

    printf("Minha idade e: %d anos \n", idade);
    printf("Minha altura e: %.2f metros \n", altura);
    printf("meu peso e: %.2lf kg \n", peso);
    printf("Meu nome e: %s \n", nome);
    printf("Minha comida favorita e: %s \n", comida);
    printf("Minha bebida e sobremesa favorita e: %s e %s \n", bebida, sobremesa);


    return 0;
}

/*
    Tipos de variaveis em C:
    int -> Variavel do tipo inteiro, pode armazenar numeros inteiros. <4 bytes em sistemas modernos.>
    float -> Variavel do tipo "single presision floating point"
        pode armazenar numeros com casas decimais. <4 bytes em sistemas modernos.>
    double -> Variavel do tipo "double precision floating point"
        pode armazenar numeros com casas decimais. <8 bytes>
    char -> Variavel do tipo caractere unico <1 byte>
    char[] -> Variavel do tipo vetor de caracteres, pode armazenar mais de um caractere. <o tamanho pode variar>
    bool -> Variavel do tipo booleano, pode ser true ou false. <1 byte (requer a bibilioteca <stdbool.h>)>
*/