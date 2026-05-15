#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char codigo[2][4];
  char estado[2][2];
  char cidade[2][32];
  int populacao[2];
  int pontos[2];
  float pib[2];
  float area[2]; 
  float pibCapita[2];
  float densidadePop[2];

  // Área para entrada de dados
  // Cadasrtro carta 1
  printf("====SUPER TRUNFO=====\n\nSiga as instruções para cadastrar suas cartas.\n");
  printf("---------\nCARTA UM\n---------\nVamos cadastrar a primeira carta do jogo!\n");

  printf("Defina uma letra de 'A' a 'H' (representando um dos oito estados): ");
  scanf(" %s", estado[0]);

  printf("Digite o código da carta\n(Letra do estado seguida de 01 à 04, ex: A01): ");
  scanf(" %s", codigo[0]);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade[0]);

  printf("Digite o número de habitantes da sua cidade: ");
  scanf(" %d", &populacao[0]);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf(" %i", &pontos[0]);

  printf("Digite a área (km²) da cidade: ");
  scanf(" %f", &area[0]);

  printf("Digite o PIB da cidade: R$");
  scanf(" %f", &pib[0]);

  printf("A primeira carta foi cadastrada com sucesso!!!");

  // Cadastro carta 2
  printf("\n\n---------\nCARTA DOIS\n---------\nVamos cadastrar a segunda carta do jogo!\n");

  printf("Defina uma letra de 'A' a 'H' (representando um dos oito estados): ");
  scanf(" %s", estado[1]);

  printf("Digite o código da carta\n(Letra do estado seguida de 01 à 04, ex: A01): ");
  scanf(" %s", codigo[1]);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade[1]);

  printf("Digite o número de habitantes da sua cidade: ");
  scanf(" %d", &populacao[1]);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf(" %i", &pontos[1]);

  printf("Digite a área (km²) da cidade: ");
  scanf(" %f", &area[1]);

  printf("Digite o PIB da cidade: R$");
  scanf(" %f", &pib[1]);

  printf("A segunda carta foi cadastrada com sucesso!!!");


  //Cálculos dos dados das cartas
  // Carta 1
  densidadePop[0] = populacao[0]/area[0];
  pibCapita[0] = pib[0]/populacao[0];

  //Carta 2
  densidadePop[1] = populacao[1]/area[1];
  pibCapita[1] = pib[1]/populacao[1];

  //Exibição dos dados das cidades
  printf("\n\n---------\nCARTA UM\n---------\n");
  printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nPontos turísticos: %i\nÁrea: %.2fKm²\nPIB: R$%.2f\nDensidade Populacional: %.5f habitantes por Km²\nPib per Capita: R$%.2f",estado[0], codigo[0], cidade[0], populacao[0], pontos[0], area[0], pib[0], densidadePop[0], pibCapita[0]);

  printf("\n\n---------\nCARTA DOIS\n---------\n");
  printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nPontos turísticos: %i\nÁrea: %.2fKm²\nPIB: R$%.2f\nDensidade Populacional: %.5f habitantes por Km²\nPib per Capita: R$%.2f",estado[1], codigo[1], cidade[1], populacao[1], pontos[1], area[1], pib[1], densidadePop[1], pibCapita[1]);



return 0;
}
