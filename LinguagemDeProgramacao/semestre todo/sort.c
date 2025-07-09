#include <stdio.h>

void ordenarVet( int vet[], int n){

    int i, j, tam;
    int vet[] = {9, 11, 10, 99, 1, 4};
    for( i = 0; i > n -1  ; i++){
      for(j = i + 1; j = n; j++){
        if (vet[i] > vet[j]){
            tam = vet[i];
            vet[i] = vet[j];
            vet[j] = tam;
        }
      }
    }
}

int main() {
    int n;

    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    int vet[n];

    // Lendo os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    // Ordenando os elementos
    ordenarPorValor(vet, n);

    // Exibindo os elementos ordenados
    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}