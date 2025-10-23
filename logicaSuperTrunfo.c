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
        int codigo, codigo2, pontosturisticos, pontosturisticos2, opcao;

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
        printf("\n\nEscolha um dos atributos para comparar as cartas:\n");
        printf("\n1) População;");
        printf("\n2) Área;");
        printf("\n3) PIB;");
        printf("\n4) Pontos Turísticos;");
        printf("\n5) Densidade (o menor valor ganha);");
        printf("\n6) PIB per capita;");
        printf("\n7) Super-Poder;\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("\nComparando a população:\n");
                printf("\n%s = %lu", cidade, populacao);
                printf("\n%s = %lu", cidade2, populacao2);
                    if (populacao > populacao2){
                        printf("\n%s venceu!\n", cidade);
                    } else {
                        printf("\n%s venceu!\n", cidade2);
                    }
            break;
            case 2:
                printf("\nComparando a área:\n");
                printf("\n%s = %f", cidade, area);
                printf("\n%s = %f", cidade2, area2);
                     if (area > area2){
                        printf("\n%s venceu!\n", cidade);
                     } else {
                        printf("\n%s venceu!\n", cidade2);
                     }
            break;
            case 3:
                printf("\nComparando o PIB:\n");
                printf("\n%s = %f", cidade, pib);
                printf("\n%s = %f", cidade2, pib2);
                    if (pib > pib2){
                        printf("\n%s venceu!\n", cidade);
                    } else {
                        printf("\n%s venceu!\n", cidade2);
                    }
            break;
            case 4:
                printf("\nComparando a quatidade de pontos turísticos:\n");
                printf("\n%s = %d", cidade, pontosturisticos);
                printf("\n%s = %d", cidade2, pontosturisticos2);
                    if (pontosturisticos > pontosturisticos2){
                        printf("\n%s venceu!\n", cidade);
                    } else {
                        printf("\n%s venceu!\n", cidade2);
                    }
            break;
            case 5:
                printf("\nComparando a densidade:\n");
                printf("\n%s = %f", cidade, densidade);
                printf("\n%s = %f", cidade2, densidade2);
                    if (densidade < densidade2){
                        printf("\n%s venceu!\n", cidade);
                    } else {
                        printf("\n%s venceu!\n", cidade2);
                    }
            break;
            case 6:
                printf("\nComparando o PIB per capita:\n");
                printf("\n%s = %f", cidade, percapita);
                printf("\n%s = %f", cidade2, percapita2);
                    if (percapita > percapita2){
                        printf("\n%s venceu!\n", cidade);
                    } else {
                        printf("\n%s venceu!\n", cidade2);
                    }
            break;
            default:
                printf("\nComparando o super-poder:\n");
                printf("\n%s = %f", cidade, superpoder);
                printf("\n%s = %f", cidade2, superpoder2);
                    if (superpoder > superpoder2){
                        printf("\n%s venceu!\n", cidade);
                    } else {
                        printf("\n%s venceu!\n", cidade2);
                    }
        }
        
        
    return 0;
}
