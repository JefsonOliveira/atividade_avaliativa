/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*9) Questão
Desenvolver um algoritmo que efetue a soma de todos os números ímpares que
são múltiplos de seis e que se encontram no conjunto dos números de 15 até 250*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0, soma = 0;

    printf("\n -> SOMA DOS IMPARES MULTIPLOS DE 6 <-");

    for (num = 15; num <= 250; num++)
    {

        if (num % 3 == 0)

            soma = soma + num;
    }

    printf("\n SOMA DOS IMPARES: %d\n", soma);

    return (0);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0, soma = 0;

    printf("\n -> SOMA DOS IMPARES MULTIPLOS DE 6 <-");

    for (num = 15; num <= 250; num++)
    {

        if (num % 6 == 0)

            soma = soma + num;
    }

    printf("\n SOMA DOS IMPARES: %d\n", soma);

    return (0);
}
*/