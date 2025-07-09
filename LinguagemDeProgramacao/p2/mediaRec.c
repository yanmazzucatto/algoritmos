#include <stdio.h>

// Função recursiva que retorna o menor valor no vetor
int min_rec(int vet[], int index, int tamanho) {
    // Caso base: se for o último elemento, retorne ele
    if (index == tamanho - 1) {
        return vet[index];
    }

    // Chamada recursiva para o próximo índice
    int min_do_resto = min_rec(vet, index + 1, tamanho);

    // Retorna o menor entre o atual e o resto
    return (vet[index] < min_do_resto) ? vet[index] : min_do_resto;
}

int main() {
    int vet[] = {4, 5, 7, 11, 1, 23, 15};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    // Chamada da função recursiva a partir do índice 0
    int menor = min_rec(vet, 0, tamanho);

    // Impressão do resultado
    printf("menor valor do vetor: %d\n", menor);

    return 0;
}
