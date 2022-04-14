/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*7) Questão
Faça um algoritmo para mostra os múltiplos de 3 contidos de 1 a 100; (while)*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont = 0;

    while (cont <= 100)

    {
        cont++;
        if (cont % 3 == 0)
        {
            printf("\n %d", cont);
        }
    }
    printf("\n");
    return (0);
}