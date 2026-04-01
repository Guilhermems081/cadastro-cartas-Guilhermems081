#include <stdio.h>
#include <string.h>

int main() {

    // ===================== VARIÁVEIS =====================
    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    char codigo1[3], codigo2[3];

    unsigned int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;

    float pib1, pib2;
    float area_da_cidade1, area_da_cidade2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capto1, pib_per_capto2;
    float superPoder1, superPoder2;

    int atributo1, atributo2;

    float valorEscolhido1Carta1, valorEscolhido1Carta2;
    float valorEscolhido2Carta1, valorEscolhido2Carta2;

    char nomeAtributo1[30], nomeAtributo2[30];

    float somadosAtributosCarta1, somadosAtributosCarta2;

    // ===================== CARTA 1 =====================
    printf("====== DADOS DA CARTA 1 ======\n");

    printf("\nQual o estado: ");
    scanf(" %[^\n]", estado1);

    printf("Qual a cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o código de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Digite a quantidade de habitantes: ");
    scanf("%u", &populacao1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o tamanho da cidade em KM: ");
    scanf("%f", &area_da_cidade1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    densidade_populacional1 = (float)populacao1 / area_da_cidade1;
    pib_per_capto1 = (float)(pib1 * 1000000000) / populacao1;
    superPoder1 = (1.0 / densidade_populacional1) + populacao1 + pib1 +
                  pontos_turisticos1 + area_da_cidade1 + pib_per_capto1;

    // ===================== CARTA 2 =====================
    printf("\n====== DADOS DA CARTA 2 ======\n");

    printf("\nQual o estado: ");
    scanf(" %[^\n]", estado2);

    printf("Qual a cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o código de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Digite a quantidade de habitantes: ");
    scanf("%u", &populacao2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o tamanho da cidade em KM: ");
    scanf("%f", &area_da_cidade2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    densidade_populacional2 = (float)populacao2 / area_da_cidade2;
    pib_per_capto2 = (float)(pib2 * 1000000000) / populacao2;
    superPoder2 = (1.0 / densidade_populacional2) + populacao2 + pib2 +
                  pontos_turisticos2 + area_da_cidade2 + pib_per_capto2;

    // ===================== PRIMEIRO ATRIBUTO =====================
    printf("\n=====Primeiro Atributo para Comparação=====\n");
    printf("\nEscolha o primeiro atributo:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turisticos\n");
    printf("5- Densidade Demográfica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    switch (atributo1) {

        case 1:
            somadosAtributosCarta1 = populacao1;
            somadosAtributosCarta2 = populacao2;
            valorEscolhido1Carta1 = populacao1;
            valorEscolhido1Carta2 = populacao2;
            strcpy(nomeAtributo1, "População");
            break;

        case 2:
            somadosAtributosCarta1 = area_da_cidade1;
            somadosAtributosCarta2 = area_da_cidade2;
            valorEscolhido1Carta1 = area_da_cidade1;
            valorEscolhido1Carta2 = area_da_cidade2;
            strcpy(nomeAtributo1, "Área");
            break;

        case 3:
            somadosAtributosCarta1 = pib1;
            somadosAtributosCarta2 = pib2;
            valorEscolhido1Carta1 = pib1;
            valorEscolhido1Carta2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;

        case 4:
            somadosAtributosCarta1 = pontos_turisticos1;
            somadosAtributosCarta2 = pontos_turisticos2;
            valorEscolhido1Carta1 = pontos_turisticos1;
            valorEscolhido1Carta2 = pontos_turisticos2;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;

        case 5:
            somadosAtributosCarta1 = densidade_populacional1;
            somadosAtributosCarta2 = densidade_populacional2;
            valorEscolhido1Carta1 = densidade_populacional1;
            valorEscolhido1Carta2 = densidade_populacional2;
            strcpy(nomeAtributo1, "Densidade Demográfica");
            break;

        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // ===================== SEGUNDO ATRIBUTO =====================
    printf("\n=====Segundo Atributo para Comparação=====\n");
    printf("\nEscolha o segundo atributo:\n");

    if (atributo1 != 1) printf("1- População\n");
    if (atributo1 != 2) printf("2- Área\n");
    if (atributo1 != 3) printf("3- PIB\n");
    if (atributo1 != 4) printf("4- Pontos Turisticos\n");
    if (atributo1 != 5) printf("5- Densidade Demográfica\n");

    printf("Escolha o segundo atributo: ");
    scanf("%d", &atributo2);

    switch (atributo2) {

        case 1:
            somadosAtributosCarta1 += populacao1;
            somadosAtributosCarta2 += populacao2;
            valorEscolhido2Carta1 = populacao1;
            valorEscolhido2Carta2 = populacao2;
            strcpy(nomeAtributo2, "População");
            break;

        case 2:
            somadosAtributosCarta1 += area_da_cidade1;
            somadosAtributosCarta2 += area_da_cidade2;
            valorEscolhido2Carta1 = area_da_cidade1;
            valorEscolhido2Carta2 = area_da_cidade2;
            strcpy(nomeAtributo2, "Área");
            break;

        case 3:
            somadosAtributosCarta1 += pib1;
            somadosAtributosCarta2 += pib2;
            valorEscolhido2Carta1 = pib1;
            valorEscolhido2Carta2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;

        case 4:
            somadosAtributosCarta1 += pontos_turisticos1;
            somadosAtributosCarta2 += pontos_turisticos2;
            valorEscolhido2Carta1 = pontos_turisticos1;
            valorEscolhido2Carta2 = pontos_turisticos2;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;

        case 5:
            somadosAtributosCarta1 += densidade_populacional1;
            somadosAtributosCarta2 += densidade_populacional2;
            valorEscolhido2Carta1 = densidade_populacional1;
            valorEscolhido2Carta2 = densidade_populacional2;
            strcpy(nomeAtributo2, "Densidade Demográfica");
            break;

        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // ===================== RESULTADO =====================
    printf("\n===== RESULTADO =====\n");

    printf("Carta 1: %s - %s: %.2f | %s: %.2f\n",
           cidade1, nomeAtributo1, valorEscolhido1Carta1,
           nomeAtributo2, valorEscolhido2Carta1);

    printf("Carta 2: %s - %s: %.2f | %s: %.2f\n",
           cidade2, nomeAtributo1, valorEscolhido1Carta2,
           nomeAtributo2, valorEscolhido2Carta2);

    printf("\nTotal Carta 1: %.2f", somadosAtributosCarta1);
    printf("\nTotal Carta 2: %.2f\n", somadosAtributosCarta2);

    if (somadosAtributosCarta1 == somadosAtributosCarta2)
        printf("\nResultado: Empate!\n");
    else
        printf("\nResultado: Carta %d venceu!\n",
               (somadosAtributosCarta1 > somadosAtributosCarta2) ? 1 : 2);

    return 0;
}