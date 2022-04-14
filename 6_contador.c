/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*6) Questão
1. Escrever um algoritmo que leia uma quantidade desconhecida de
números e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50],
[51-75] e [76-100]. A entrada de dados deve terminar quando for lido um
número negativo*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0, cont = 0, sequencia1 = 0, sequencia2 = 0, sequencia3 = 0, sequencia4 = 0;

    printf("Quantos números serão digitados? ");
    scanf("%d", &cont);

    for (int i = 0; i < cont; i++)
    {

        printf("Digite um número: ");
        scanf("%d", &n);

        if (n < 0)
        {
            i = cont;
        }
        if ((n >= 0) && (n <= 25))
        {
            sequencia1++;
        }
        else if ((n >= 26) && (n <= 50))
        {
            sequencia2++;
        }
        else if ((n >= 51) && (n <= 75))
        {
            sequencia3++;
        }
        else if ((n >= 76) && (n <= 100))
        {
            sequencia4++;
        }
        n = 0;
    }

    printf("\nDe 0-25: %d", sequencia1);
    printf("\nDe 26-50: %d", sequencia2);
    printf("\nDe 51-75: %d", sequencia3);
    printf("\nDe 76-100: %d", sequencia4);

    return (0);
}