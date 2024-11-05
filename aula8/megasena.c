#include <stdio.h>

int main() {
    int n;
    
    // Leitura do número n
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  
        }
        
        printf("\n");
    }
    
    return 0;
}
