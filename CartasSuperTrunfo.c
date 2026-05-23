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

  // variaveis carta 2
  char estado2;
  char codigo2[20];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos2;

  // entrada e saida da carta 1
  printf("-- cadastro da carta 1 --\n");

  printf("digite o estado (A-H): ");
  scanf(" %c", &estado1);
  printf("o estado digitado foi: %c\n\n", estado1);

  printf("digite o codigo da carta: ");
  scanf("%s", codigo1);
  printf("o codigo digitado foi: %s\n\n", codigo1);

 getchar();

 printf("digite o nome da cidade: ");
 fgets(cidade1, 50, stdin);
 printf("a cidade digitada foi: %s\n", cidade1);

  printf("digite a populacao: ");
  scanf("%d", &populacao1);
  printf("a populacao digitada foi: %d\n\n", populacao1);

  printf("digite a area (km²): ");
  scanf("%f", &area1);
  printf("a area digitada foi: %.2f\n\n", area1);

  printf("digite o PIB: ");
  scanf("%f", &PIB1);
  printf("o PIB digitado foi: %.2f\n\n", PIB1);

  printf("digite o numero de pontos turisticos: ");
  scanf("%d", &pontos1);
  printf("o numero de pontos turisticos digitados foi: %d\n\n", pontos1);


  // entrada e saida da carta 2
  printf("-- cadastro da carta 2 --\n");

  printf("digite o estado (A-H): ");
  scanf(" %c", &estado2);
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
  printf("a populacao digitada foi: %d\n\n", populacao2);

  printf("digite a area (km²): ");
  scanf("%f", &area2);
  printf("a area digitada foi: %.2f\n\n", area2);

  printf("digite o PIB: ");
  scanf("%f", &PIB2);
  printf("o PIB digitado foi: %.2f\n\n", PIB2);

  printf("digite o numero de pontos turisticos: ");
  scanf("%d", &pontos2);
  printf("o numero de pontos turisticos digitados foi: %d\n\n", pontos2);

  printf("-- comparacao entre as cartas --\n");

  return 0;
}