#include <stdio.h>

 int main() {

    /*
    Incremento (++)
    Pré-Incremento ++A
    Pós-Incremento A++
    Decremento (--)
    Pré-Decremento --A
    Pós-Decremento A--
    */

    int numero1 = 1, resultado;

    printf("Antes Incremento: %d\n", numero1);
   //numero1 = numero1 +1;
   //numero1 += 1;
   //Pós Incremento;
   //resultado = numero1;
   //resultado++
   resultado = numero1++;
    //printf("Após Incremento: %d\n", numero1);
    printf("Após Pós-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);


    resultado = ++numero1;
    printf("Após Pré-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

   //numero1 = numero1 -1;
   //numero1 -= 1;
   
   // numero1--;
   // printf("Após Decremento: %d\n", numero1);
   resultado = numero1--;
   printf("Após Pós-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

   resultado = --numero1;
   printf("Após Pré-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 
 }
 