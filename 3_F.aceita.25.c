/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*3) Questão
Criar um algoritmo para entrar com nome, sexo e idade de uma pessoa. Se a
pessoa for do sexo feminino e tiver menos que 25 anos, imprimir o nome e a
mensagem: ACEITA. Caso contrário, imprimir nome e mensagem: NÃO
ACEITA. (considerar ‘ f ’ ou ‘F’ ).*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){

      char nome[30], sexo;
      int idade;

      printf("Informe seu nome: ");
      gets(nome);
      printf("Informe seu sexo: ");
      scanf("%c", &sexo);
      printf("Informe sua idade: ");
      scanf("%d", &idade);

      if ((sexo == 'f' || sexo == 'F') && idade < 25)
            printf("\n%s. -- ACEITA --\n\n", nome);

      else
            printf("\n -- NAO ACEITA --\n\n");

      return (0);
}