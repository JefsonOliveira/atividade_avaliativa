/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*8) Questão
Faça um algoritmo que receba vários números e mostre a quantidade de números
maiores que 5; (do while)*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int op, quant, quantnumero = 0;

    do
    {
        printf("\n Serão contabilizados quantos valores maiores que '5' foram inseridos!");
        printf("\n Entre com um valor: ");
        scanf("%d", &quant);

        if (quant > 5)
        {
            quantnumero++;
        }

        printf("Deseja continuar? '1' para sim, '0' para nao :  ");
        scanf("%d", &op);
    } while (op == 1);

    printf("\n - Foram adicionados %d numeros maiores que '5' \n", quantnumero);

    return (0);
}
