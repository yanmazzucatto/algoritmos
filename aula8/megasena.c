#include <stdio.h>

int main() {
    int n;
    
    // Leitura do número n
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    // Laço externo: para cada linha de 1 até n
    for (int i = 1; i <= n; i++) {
        // Laço interno: para imprimir os números de 1 até o valor da linha
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Imprime o número j seguido de um espaço
        }
        
        // Depois de imprimir todos os números na linha, quebra a linha
        printf("\n");
    }
    
    return 0;
}
