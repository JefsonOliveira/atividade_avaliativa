/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*1) Questão
O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde
para dar umaindicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / ( altura )2 Elabore um algoritmo que leia o peso e a altura
de um adulto e mostre sua condição de acordo com a tabela abaixo.
IMC em adultos Condição
Abaixo de 18,5 Abaixo do peso
Entre 18,5 e 25 Peso normal
Entre 25 e 30 Acima do peso
Acima de 30 obeso
(print e anexe o resultado provando que foi você que fez - Seu nome deve aparecer
em qualquer parte da questão).
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura, peso, imc;

    printf("\n----CALCULO DE IMC----");
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc > 30)
    {
        printf("\nSEU IMC E: %.2f -- VOCE ESTA 'OBESO!' \n", imc);
    }
    else if (imc > 25 && imc <= 30)
    {
        printf("\nSEU IMC E: %.2f -- VOCE ESTA 'ACIMA DO PESO' \n", imc);
    }
    else if (imc >= 18.5 && imc <= 25)
    {
        printf("\nSEU IMC E: %.2f -- VOCE ESTA 'PESO NORMAL' \n", imc);
    }
    else if (imc < 18.5)
    {
        printf("\nSEU IMC E: %.2f -- VOCE ESTA 'ABAIXO DO PESO' \n", imc);
    }
    else
    {
        printf("\nValor invalido");
    }

    return (0);
}