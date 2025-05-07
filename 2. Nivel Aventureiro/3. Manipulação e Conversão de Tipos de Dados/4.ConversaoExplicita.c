#include <stdio.h>

    int main() {
        int a = 10;
        int b = 3;
        float quociente = (float) a / b; //"a" é explicitamente convertido para float
// "(float)" é chamado de casting
// casting = forçar para armazenar a informação como float = ponto flutuante
// caso nao use o casting o resultado nao saira com as informações do float
        printf("Quociente: %.2f\n", quociente);

        return 0; 
    }