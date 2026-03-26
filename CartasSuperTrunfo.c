#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Nas variáveis códigos, eu coloquei codigo[3], porque alem de pegar o valor ele vai guarda o enter
    char estado1[20], estado2[20], cidade1[20], cidade2[20], codigo1[3], codigo2[3];
    unsigned int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2, area_da_cidade1, area_da_cidade2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capto1, pib_per_capto2;
    float superPoder1, superPoder2;
  // Área para entrada de dados
  
  // Área para adicionar as informações da carta 1
    printf("====== DADOS DA CARTA 1 ======\n");

    printf("\nQual o estado: ");
    fgets(estado1, 20, stdin);

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
    // serve para pegar o espaço ou enter que foi dado no scanf para que não interfira na proxima ação
    getchar(); 

    densidade_populacional1 = (float)populacao1 / area_da_cidade1;
    pib_per_capto1 =  (float) (pib1 * 1000000000) / populacao1;
    superPoder1 = (1.0 / densidade_populacional1) + populacao1 + pib1 + pontos_turisticos1 + area_da_cidade1 + pib_per_capto1;

  // [Area para adicionar as informações da carta 2
    printf("\n====== DADOS DA CARTA 2 ======\n");

    printf("\nQual o estado: ");
    fgets(estado2, 20, stdin);

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
    pib_per_capto2 =  (float) (pib2 * 1000000000) / populacao2;
    superPoder2 = (1.0 / densidade_populacional2) + populacao2 + pib2 + pontos_turisticos2 + area_da_cidade2 + pib_per_capto2;


  printf("\n========== CARTA VENCEDORA ==========\n");
  printf("\nComparação de cartas (Atributo: População):\n");
  printf("\nA Carta 1 - %s: %u\n", cidade1, populacao1);
  printf("A Carta 2 - %s: %u\n", cidade2, populacao2);
  
  if(populacao1 > populacao2) {
    printf("Resultado: Carta 1 %s venceu!\n", cidade1);
  } else {
      printf("Resultado: Carta 2 %s venceu!\n", cidade2);
  }

    return 0;
} 
