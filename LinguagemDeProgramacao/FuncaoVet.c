#include <stdio.h>

void printVet(int v[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d, ", v[i]);
    }
    printf("\n");
    v[0] = 9; // Alterando a primeira posição do vetor para 9
}

int main() {
    int vet[] = {1, 2, 3, 4, 5};
    printVet(vet); // Primeira chamada da função
    printVet(vet); // Segunda chamada da função
}
