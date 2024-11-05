#include <stdio.h>

int main() {
    int n;
    
    // Leitura do número n
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for (long int i = 1; i <= n; i++) {
        for (long int j = 1; j <= i; j++) {
            printf("%ld", j);  
        }
        
        printf("\n");
    }
    
    return 0;
}
