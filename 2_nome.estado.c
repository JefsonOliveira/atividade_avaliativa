/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*2) Questão
Criar um algoritmo para ler a sigla de um estado de uma pessoa e imprimir uma
das mensagens:
- Carioca; - Paulista; - Amazonense; - outros estados.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

  char estado[3];
  printf("\n-#-Consulta de Estado por SIGLA-#-");
  printf("\nInforme a sigla de um estado do Brasil: ");
  scanf("%s", estado);

  if (!strcmp(estado, "rj") || !strcmp(estado, "rj"))
    printf("Carioca\n");

  else if (!strcmp(estado, "sp") || !strcmp(estado, "sp"))
    printf("Paulista\n");

  else if (!strcmp(estado, "am") || !strcmp(estado, "am"))
    printf("Amazonense\n");

  else
    printf("Outros estados\n");

  return (0);
}