#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    //Sintaxe padrão printf
    //printf ("texto com formatação", variavel1, variavel2, ...);
    /*scanf("% %", &variavel, &variavel);
      printf("Variavel: %\n, variavel");
      printf("Variavel: %\n, variavel");
      Para ler duas variavis no mesmo Scanf.
*/
    printf("Entre com seu nome\n");
    scanf("%s", nome);
    printf("Nome: %s\n", nome);
    printf("Entre com sua idade\n");
    scanf("%d", &idade);
    printf("Idade: %d\n", idade);
    printf("Entre com a altura\n");
    scanf("%f", &altura);
    printf("Altura: %f\n", altura);
    printf("Entre com a  opcao\n");
    scanf(" %c", &opcao);
    printf("A opcao é: %c\n", opcao);
}