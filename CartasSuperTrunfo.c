#include <stdio.h>
int main(){
    
    char estado, estado01;
    char codigo[20], codigo01[20];
    char nome[20], nome01[20];
    int populacao, populacao01;
    float area, area01;
    float pib, pib01;
    int pontos_turisticos, pontos_turisticos01;

    printf("Digite a letra do Estado\n");
       scanf("%s", &estado);
    printf("Digite o Código do Estado\n");
       scanf("%s", &codigo);
    printf("Digite o Nome da Cidade\n");
       scanf("%s", &nome);
    printf("Qual a População da Cidade?\n");
       scanf("%d", &populacao);
    printf("Qual a  Área Km² da Cidade?\n");
       scanf("%f", &area);
    printf("Qual o PIB da Cidade?\n");
       scanf("%f", &pib);
    printf("Quantos são os Pontos Turisticos da Cidade?\n");
       scanf("d", &pontos_turisticos);
}
