#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

        char estado, estado2;
        unsigned long int populacao, populacao2;
        char cidade[20], cidade2[20];
        float area, area2, pib, pib2, densidade, densidade2, percapita, percapita2, superpoder, superpoder2;
        int codigo, codigo2, pontosturisticos, pontosturisticos2;

    // Cadastro das Cartas:
    printf("BEM VINDO AO SUPER TRUNFO!");
    printf("\n\nPRIMEIRA CARTA");
    printf ("\nDigite uma letra entre A e H:\n = ");
    scanf("%c", &estado);
    printf ("\nDigite um número de 01 a 04:\n = ");
    scanf("%i", &codigo);
    printf ("\nDigite o nome da cidade:\n = ");
    scanf("%s", &cidade);
    printf ("\nDigite a população:\n = ");
    scanf("%lu", &populacao);
    printf ("\nDigite a área:\n = ");
    scanf("%f", &area);
    printf ("\nDigite o PIB:\n = ");
    scanf("%f", &pib);
    printf ("\nDigite o número dem pontos turísticos:\n = ");
    scanf("%d", &pontosturisticos);
    printf("\n\n_____FIM DA PRIMEIRA CARTA_____");

        densidade = (populacao / area);
        percapita = (pib / populacao);
        superpoder = (1 / densidade) + populacao + area + pib + pontosturisticos + percapita;

    printf("\n\nSEGUNDA CARTA");
    printf ("\nDigite uma letra entre A e H:\n = ");
    scanf("%s", &estado2);
    printf ("\nDigite um número de 01 a 04:\n = ");
    scanf("%i", &codigo2);
    printf ("\nDigite o nome da cidade:\n = ");
    scanf("%s", &cidade2);
    printf ("\nDigite a população:\n = ");
    scanf("%lu", &populacao2);
    printf ("\nDigite a área:\n = ");
    scanf("%f", &area2);
    printf ("\nDigite o PIB:\n = ");
    scanf("%f", &pib2);
    printf ("\nDigite o número dem pontos turísticos:\n = ");
    scanf("%d", &pontosturisticos2);
    printf("\n\n_____FIM DA SEGUNDA CARTA_____");

        densidade2 = (populacao2 / area2);
        percapita2 = (pib2 / populacao2);
        superpoder2 = (1 / densidade2) + populacao2 + area2 + pib2 + pontosturisticos2 + percapita2;


    // Comparação de Cartas:
        printf("\n\nComparando a população!\n");

        if (populacao > populacao2) {
            printf("\nPopulação de %s = %lu", cidade, populacao);
            printf("\nPopulação de %s = %lu", cidade2, populacao2);
            printf("\n%s venceu!", cidade);
        }
        else {
            printf("\nPopulação de %s = %lu", cidade, populacao);
            printf("\nPopulação de %s = %lu", cidade2, populacao2);
            printf("\n\n%s venceu!", cidade2);
        }

    return 0;
}
