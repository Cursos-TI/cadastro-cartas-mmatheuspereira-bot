#include <stdio.h>

int main() {

  // variaveis da carta 1
  char estado1;
  char codigo1[20];
  char cidade1[50];
  int populacao1;
  float area1;
  float PIB1;
  int pontos1;
  float dsp1, ppc1; //dsp = densidade populacional, ppc = pib per capta
  
  // variaveis carta 2
  char estado2;
  char codigo2[20];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos2;
  float dsp2, ppc2; //dsp = densidade populacional, ppc = pib per capta
  

  // entrada e saida da carta 1
  printf("-- cadastro da carta 1 --\n");

  printf("digite o estado (A-H): ");
  scanf(" %c", &estado1); //O espaço antes do %c serve para o scanf ignorar caracteres “sobrando” no teclado
  printf("o estado digitado foi: %c\n\n", estado1);

  printf("digite o codigo da carta: ");
  scanf("%s", codigo1);
  printf("o codigo digitado foi: %s\n\n", codigo1);

 getchar();

 printf("digite o nome da cidade: ");
 fgets(cidade1, 50, stdin); //fgets lÊ a linha toda incluindo espaço
 printf("a cidade digitada foi: %s\n", cidade1);

  printf("digite a populacao: ");
  scanf("%d", &populacao1);
  printf("a populacao digitada foi: %d habitantes\n\n", populacao1);

  printf("digite a area (km²): ");
  scanf("%f", &area1);
  printf("a area digitada foi: %.2f km²\n\n", area1);

  printf("digite o PIB: ");
  scanf("%f", &PIB1);
  printf("o PIB digitado foi: %.2f\n\n", PIB1);

  printf("digite o numero de pontos turisticos: ");
  scanf("%d", &pontos1);
  printf("o numero de pontos turisticos digitados foi: %d\n\n", pontos1);


  // entrada e saida da carta 2
  printf("-- cadastro da carta 2 --\n");

  printf("digite o estado (A-H): ");
  scanf(" %c", &estado2); //O espaço antes do %c serve para o scanf ignorar caracteres “sobrando” no teclado
  printf("o estado digitado foi: %c\n\n", estado2);

  printf("digite o codigo da carta: ");
  scanf("%s", codigo2);
  printf("o codigo digitado foi: %s\n\n", codigo2);

 getchar();

 printf("digite o nome da cidade: ");
 fgets(cidade2, 50, stdin);
 printf("a cidade digitada foi: %s\n", cidade2);

  printf("digite a populacao: ");
  scanf("%d", &populacao2);
  printf("a populacao digitada foi: %d habitantes\n\n", populacao2);

  printf("digite a area (km²): ");
  scanf("%f", &area2);
  printf("a area digitada foi: %.2f km²\n\n", area2);

  printf("digite o PIB: ");
  scanf("%f", &PIB2);
  printf("o PIB digitado foi: %.2f\n\n", PIB2);

  printf("digite o numero de pontos turisticos: ");
  scanf("%d", &pontos2);
  printf("o numero de pontos turisticos digitados foi: %d\n\n", pontos2);

  dsp1 = (float) populacao1 / area1;
  ppc1 = PIB1 *1000000000 / populacao1;

  dsp2 = (float) populacao2 / area2;
  ppc2 = PIB2 *1000000000 / populacao2;

 printf("\n===== CARTA 1 =====\n");

 printf("Estado: %c\n", estado1);
 printf("Codigo: %s\n", codigo1);
 printf("Cidade: %s\n", cidade1);
 printf("Populacao: %d\n", populacao1);
 printf("Area: %.2f km²\n", area1);
 printf("PIB: %.2f\n", PIB1);
 printf("Pontos turisticos: %d\n", pontos1);
 printf("densidade populacional: %.2f  hab/km²\n", dsp1);
 printf("PIB per capita: %.2f reais\n", ppc1);

 printf("\n===== CARTA 2 =====\n");

 printf("Estado: %c\n", estado2);
 printf("Codigo: %s\n", codigo2);
 printf("Cidade: %s\n", cidade2);
 printf("Populacao: %d\n", populacao2);
 printf("Area: %.2f km²\n", area2);
 printf("PIB: %.2f\n", PIB2);
 printf("Pontos turisticos: %d\n", pontos2);
 printf("densidade populacional: %.2f  hab/km²\n", dsp2);
 printf("PIB per capita: %.2f reais\n", ppc2);
 

printf("-- comparacao entre as cartas --\n");

return 0;
}