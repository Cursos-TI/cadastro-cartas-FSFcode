#include <stdio.h>

int main()
{
  char codigo[2][4];
  char estado[2][2];
  char cidade[2][32];
  unsigned long int populacao[2];
  int pontos[2];
  float pib[2];
  float area[2]; 
  float pibCapita[2];
  float densidadePop[2];
  float superPoder[2];

  printf("==== SUPER TRUNFO ====\n\n");

  // =========================
  // CADASTRO CARTA 1
  // =========================
  printf("----- CARTA 1 -----\n");

  printf("Estado (A-H): ");
  scanf(" %s", estado[0]);

  printf("Codigo (ex: A01): ");
  scanf(" %s", codigo[0]);

  printf("Cidade: ");
  scanf(" %[^\n]", cidade[0]);

  printf("População: ");
  scanf(" %lu", &populacao[0]);

  printf("Pontos turísticos: ");
  scanf(" %d", &pontos[0]);

  printf("Área (km²): ");
  scanf(" %f", &area[0]);

  printf("PIB (R$): ");
  scanf(" %f", &pib[0]);

  // =========================
  // CADASTRO CARTA 2
  // =========================
  printf("\n----- CARTA 2 -----\n");

  printf("Estado (A-H): ");
  scanf(" %s", estado[1]);

  printf("Codigo (ex: A01): ");
  scanf(" %s", codigo[1]);

  printf("Cidade: ");
  scanf(" %[^\n]", cidade[1]);

  printf("População: ");
  scanf(" %lu", &populacao[1]);

  printf("Pontos turísticos: ");
  scanf(" %d", &pontos[1]);

  printf("Área (km²): ");
  scanf(" %f", &area[1]);

  printf("PIB (R$): ");
  scanf(" %f", &pib[1]);

  // =========================
  // CÁLCULOS
  // =========================

  // Densidade e PIB per capita
  densidadePop[0] = populacao[0] / area[0];
  pibCapita[0] = pib[0] / populacao[0];

  densidadePop[1] = populacao[1] / area[1];
  pibCapita[1] = pib[1] / populacao[1];

  // Super Poder
  superPoder[0] =
      (float)populacao[0] +
      area[0] +
      pib[0] +
      (float)pontos[0] +
      pibCapita[0] +
      (1.0 / densidadePop[0]);

  superPoder[1] =
      (float)populacao[1] +
      area[1] +
      pib[1] +
      (float)pontos[1] +
      pibCapita[1] +
      (1.0 / densidadePop[1]);

  // =========================
  // EXIBIÇÃO DAS CARTAS
  // =========================
  printf("\n\n===== DADOS DAS CARTAS =====\n");

  printf("\nCARTA 1 - %s\n", cidade[0]);
  printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos: %d\nDensidade: %.5f\nPIB per Capita: %.5f\nSuper Poder: %.5f\n",
         populacao[0], area[0], pib[0], pontos[0], densidadePop[0], pibCapita[0], superPoder[0]);

  printf("\nCARTA 2 - %s\n", cidade[1]);
  printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos: %d\nDensidade: %.5f\nPIB per Capita: %.5f\nSuper Poder: %.5f\n",
         populacao[1], area[1], pib[1], pontos[1], densidadePop[1], pibCapita[1], superPoder[1]);

  // =========================
  // COMPARAÇÃO DAS CARTAS
  // =========================
  printf("\n\n==============================");
  printf("\nComparação de Cartas");
  printf("\n==============================\n");

  printf("População: Carta %d venceu (%d)\n", (populacao[0] > populacao[1]) ? 1 : 2, populacao[0] > populacao[1]);
  printf("Área: Carta %d venceu (%d)\n", (area[0] > area[1]) ? 1 : 2, area[0] > area[1]);
  printf("PIB: Carta %d venceu (%d)\n", (pib[0] > pib[1]) ? 1 : 2, pib[0] > pib[1]);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos[0] > pontos[1]) ? 1 : 2, pontos[0] > pontos[1]);

  // MENOR vence
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePop[0] < densidadePop[1]) ? 1 : 2, densidadePop[0] < densidadePop[1]);

  printf("PIB per Capita: Carta %d venceu (%d)\n", (pibCapita[0] > pibCapita[1]) ? 1 : 2, pibCapita[0] > pibCapita[1]);
  printf("Super Poder: Carta %d venceu (%d)\n", (superPoder[0] > superPoder[1]) ? 1 : 2, superPoder[0] > superPoder[1]);

  return 0;
}