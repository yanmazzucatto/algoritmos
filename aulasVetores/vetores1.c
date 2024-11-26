#include <stdio.h>

int main() {
    
    int numeros[100];

    //preenchendo o vetor com os números de 1 a 100.
    for (int i = 0; i < 100; i++) {
        numeros[i] = i + 1; // Preenche o vetor com números de 1 a 100
    }

    //imprimir os números em ordem crescente.
    printf("Ordem crescente:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }

    //imprimir os números em ordem decrescente.
    printf("\nOrdem decrescente:\n");
    for (int i = 99; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
