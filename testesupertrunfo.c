#include <stdio.h>


int main() {
    // Variaveis de armazenamento dos dados das cartas
    char estadoA, estadoB[1];
    char cidade01[20], cidade02[20];
    char codigo01[20], codigo02[20];
    int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    int ponto_turistico01, ponto_turistico02;
    float PIBPercapita01, PIBPercapita02;
    float Densidade01, Densidade02;


    // Codigo para cadastrar as cartas
    printf("Carta01: \n");

    printf("Digite a Letra do Estado: \n");
        scanf("%c", &estadoA);

    printf("Digite o Nome da Cidade: \n");
        scanf("%s", cidade01);

    printf("Digite o Codigo da Cidade: \n");
        scanf("%s", codigo01);

    printf("Qual a População da Cidade? \n");
        scanf("%d", &populacao01);

    printf("Qual a Area Km² da Cidade? \n");
        scanf("%f", &area01);

    printf("Qual o PIB da Cidade? \n");
        scanf("%f", &pib01);

    printf("Quantos são os Pontos Turisticos da Cidade? \n");
        scanf("%d", &ponto_turistico01);

    // Operações matematicas carta 01
    PIBPercapita01 = pib01 / (float)populacao01;
    Densidade01 = populacao01 / area01;

    // Exibindo os Dados da Carta 01
    printf("Estado: %c\n", estadoA);
    printf("Cidade: %s\n", cidade01);
    printf("Codigo: %s\n", codigo01);
    printf("População: %d\n", populacao01);
    printf("Area Km²: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turisticos: %d\n", ponto_turistico01);
    printf("PIB per capita da cidade 01: %.2f\n", PIBPercapita01);
    printf("Densidade Populacional: %.2f\n", Densidade01);

    // Codigo para cadastrar a segunda carta
    printf("Carta02: \n");
    printf("Digite a Letra do Estado: \n");
        scanf("%s", estadoB);

    printf("Digite o Nome da Cidade: \n");
        scanf("%s", cidade02);

    printf("Digite o Codigo da Cidade: \n");
        scanf("%s", codigo02);

    printf("Qual a População da Cidade? \n");
        scanf("%d", &populacao02);

    printf("Qual a Area Km² da Cidade? \n");
        scanf("%f", &area02);

    printf("Qual o PIB da Cidade? \n");
        scanf("%f", &pib02);

    printf("Quantos são os Pontos Turisticos da Cidade? \n");
        scanf("%d", &ponto_turistico02);

    // Operações matematicas carta 02
    PIBPercapita02 = pib02 / (float)populacao02;
    Densidade02 = populacao02 / area02;

    // Exibindo os Dados da Carta 02
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidade02);
    printf("Codigo: %s\n", codigo02);
    printf("População: %d\n", populacao02);
    printf("Area Km²: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turisticos: %d\n", ponto_turistico02);
    printf("PIB per capita da cidade 01: %.2f\n", PIBPercapita02); 
    printf("Densidade Populacional: %.2f\n", Densidade02);


    return 0;
}