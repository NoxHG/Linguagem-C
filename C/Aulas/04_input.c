#include <stdio.h>

int main(void)
{
    int age = 0;
    float gpa = 0.0f;
    char grade;         // '\0' significa "null terminator" ou "terminador nulo", que é usado para indicar o final de uma string em C.
    char name[30] = ""; // array de caracteres (string) com tamanho 30

    printf("Enter your age: ");
    scanf("%d", &age); // scanf serve para ler a entrada do usuario. &age significa que estamos passando o endereço de memoria da variavel age para a funcao scanf, para que ela possa armazenar o valor digitado pelo usuario nessa variavel.

    printf("Enter your GPA: ");
    scanf("%.2f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("age: %d\n", age);
    printf("gpa: %f\n", gpa);
    printf("grade: %c\n", grade);
    printf("name: %s\n", name);
    return 0;
}

/*
    Comentarios finais:
    scanf -> Serve para ler a entrada do usuario.
             &age significa que estamos passando o endereco de memoria da variavel age
             para a funcao scanf, para que ela possa armazenar o valor digitado pelo usuario nessa variavel.

    getchar() -> Serve para ler um caractere da entrada padrao (teclado) e retorna o valor lido.
                 No caso do nosso codigo, estamos usando getchar()
                 para "limpar" o buffer de entrada, ou seja, para descartar o
                 caractere de nova linha ('\n') que foi deixado no buffer pelo scanf() anterior.

    printf -> Serve para imprimir uma mensagem na tela.
              %d, %f, %c e %s sao especificadores de formato que indicam o tipo de dado que sera impresso.
              %d -> inteiro, %f -> ponto flutuante, %c -> caractere, %s -> string.
              
    fgets -> Serve para ler uma string da entrada padrao (teclado)
             e armazenar na variavel name. fgets() le uma linha inteira, incluindo o
             caractere de nova linha ('\n') que indica o final da linha. Por isso, quando usamos
             fgets(), precisamos passar o tamanho do array name como segundo argumento, para que
             a funcao saiba quantos caracteres ela pode ler.

    buffer de entrada -> E um area de memoria onde os dados digitados pelo usuario
                         sao armazenados temporariamente antes de serem processados pelo programa.
                         Quando usamos scanf(), o valor digitado pelo usuario fica armazenado no
                         buffer de entrada ate que seja lido pela funcao scanf(). Se nao "limparmos" o
                         buffer de entrada, o proximo scanf() pode ler o valor que ficou armazenado no
                         buffer, em vez de esperar o usuario digitar um novo valor.
*/