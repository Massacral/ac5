#include<stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() // Função principal onde a execução do programa começa
{
    // Declarações de variáveis
    int valorInteiro1, valorInteiro2 , resultadoInteiro ; // Declara três variáveis inteiras
    float valorFlutuante , resultadoFlutuante ; // Declara duas variáveis de ponto flutuante

    // Instruções
    // Inicializa as variáveis inteiras
    valorInteiro1 = 5;
    valorInteiro2 = 10;

    // Inicializa a variável de ponto flutuante
    valorFlutuante = 2.7;

    valorInteiro1 + valorInteiro2 ; // Soma valorInteiro1 com valorInteiro2 , mas não
                                    // armazena o resultado em lugar nenhum -> comando "inútil"

    resultadoInteiro = valorInteiro1 + valorInteiro2 ; // Soma valorInteiro1 com
                                                    // valorInteiro2 , armazenando o resultado em resultadoInteiro
                                                    // resultadoInteiro agora tem o valor 15

    resultadoFlutuante = valorFlutuante / 1.5; // resultadoFlutuante agora tem
                                            // o valor 1.8 (aproximadamente, devido a resultado de ponto flutuante)

    resultadoInteiro++; // Equivalente a resultadoInteiro = resultadoInteiro + 1;
                        // Ou seja, resultadoInteiro tinha valor 15, agora tem
                        // valor 16

    printf("Valor de resultadoInteiro : %d\n", resultadoInteiro ); // Imprime o valor de resultadoInteiro

    printf("Valor de resultadoFlutuante : %f\n", resultadoFlutuante ); // Imprime o valor do resultadoFlutuante

    return 0; // Encerramento bem sucedido do programa
}