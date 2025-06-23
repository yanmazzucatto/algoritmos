#include <stdio.h>

// Função recursiva que retorna o maior valor no vetor
int max_rec(int vet[], int index, int tamanho) {
    // Caso base: se for o último elemento, retorne ele
    if (index == tamanho - 1) {
        return vet[index];
    }

    // Chamada recursiva para o próximo índice
    int max_do_resto = max_rec(vet, index + 1, tamanho);

    // Retorna o maior entre o atual e o resto
    return (vet[index] > max_do_resto) ? vet[index] : max_do_resto;
}

int main() {
    int vet[] = {1, 4, 5, 7, 11, 23, 15};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    // Chamada da função recursiva a partir do índice 0
    int maior = max_rec(vet, 0, tamanho);

    // Impressão do resultado
    printf("Maior valor do vetor: %d\n", maior);

    return 0;
}
