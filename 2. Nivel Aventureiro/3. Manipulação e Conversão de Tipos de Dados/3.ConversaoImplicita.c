#include <stdio.h>

    int main() {
        int a = 10;
        float b = 3.5;
        float resultado = a + b; // conversão implicitamente para float

        printf("Resultado: %.2f\n", resultado);
//Tomar cuidado ao usar a conversão implicita de float para int pois pode dar problema


        return 0;
     }