/*Atividade Avaliativa (Manfrine)
Lista – ADS – 3o período – 4,0 pontos - Aluno: Jefson Kairon de Oliveira - 0564441
*/
/*10) Questão
Crie um algorítmo que aplique pelo menos 2 funções e 1 procedimento criado
por você. (questões idênticas serão anuladas) (print e anexe o resultado
provando que foi você que fez).*/
#include <stdio.h>
#include <stdlib.h>

// inicio função ->
int somar(float x, float y)
{
    float valorsoma;
    valorsoma = x + y;
    return valorsoma;
}
int subtrair(float x, float y)
{
    float valorsubtracao;
    valorsubtracao = x - y;
    return valorsubtracao;
}
int multiplicar(float x, float y)
{
    float valormultiplicacao;
    valormultiplicacao = x * y;
    return valormultiplicacao;
}
int dividir(float x, float y)
{
    float valordivisao;
    valordivisao = x / y;
    return valordivisao;
}
// fim função <-
// inicio procedimento ->
void imprimir_result(float result)
{
    printf("\n Resultado: %.f", result);
}
// fim procedimento <-
int main()
{

    int opcao, op;
    float n1, n2, result;

    do
    {
        printf("---CALCULADORA---\n");
        printf("------MENU------\n");
        printf("Escolha um numero para a operação aritmetica: \n");
        printf("1.--> ADICAO\n");
        printf("2.--> SUBTRAÇÃO\n");
        printf("3.--> MULTIPLICAÇÃO\n");
        printf("4.--> DIVISÃO\n");
        scanf("%d", &opcao);

        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        switch (opcao)
        {
        case 1:
            result = somar(n1, n2);
            imprimir_result(result);
            break;
        case 2:
            result = subtrair(n1, n2);
            imprimir_result(result);
            break;
        case 3:
            result = multiplicar(n1, n2);
            imprimir_result(result);
            break;
        case 4:
            result = dividir(n1, n2);
            imprimir_result(result);
            break;
        default:
            printf("\n Opção invalida! ");
        }
        printf("\n Deseja retornar a calculadora? '1' p/ sim ou '0' p/ nao ");
        scanf("%d", &op);
    } while (op == 1);

    return (0);
}