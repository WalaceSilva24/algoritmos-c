/*
 * Exercício: Média de Vetor
 * Tema: Vetores
 *
 * Objetivo:
 * Calcular a soma e a média dos elementos armazenados em um vetor.
 *
 * Conceitos praticados:
 * - Declaração de vetores
 * - Acesso aos elementos por índice
 * - Estruturas de repetição (for)
 * - Acumuladores
 * - Média aritmética
 */

#include <stdio.h>

int main() {

    // Vetor contendo 5 números inteiros
    int vetor[5] = {10, 20, 30, 40, 50};

    // Variável acumuladora para armazenar a soma dos elementos
    int soma = 0;

    // Percorre todas as posições do vetor
    for (int i = 0; i < 5; i++) {

        // Exibe o índice e o valor armazenado
        printf("vetor[%d] = %d\n", i, vetor[i]);

        // Adiciona o valor atual à soma
        soma += vetor[i];
    }

    // Calcula a média
    float media = (float)soma / 5;

    printf("\nSoma dos elementos: %d\n", soma);
    printf("Media dos elementos: %.2f\n", media);

    return 0;
}