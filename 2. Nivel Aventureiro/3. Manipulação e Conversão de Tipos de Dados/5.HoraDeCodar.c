#include <stdio.h>
    int main() {

    int nota1, nota2, nota3;
    float media;

    printf("*** Calculadora de Médias ***\n");

    printf("Digite sua Primeira Nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua Segunda Nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua Terceira Nota: \n");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("A sua Média é: %.2f\n", media);

    return 0;
    }