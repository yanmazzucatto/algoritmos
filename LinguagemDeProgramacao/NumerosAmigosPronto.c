#include <stdio.h>

int main(void) {
    int num, soma = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    // Para cada número de 1 até num/2 (divisores próprios)
    int i = 1;
    while (i <= num / 2) {  // Enquanto i não ultrapassar num/2
        if (num % i == 0) { // Se i é divisor de num
            soma += i;      // Soma i na variável soma
        }
        i++;  // Incrementa i
    }
    
    printf("Soma dos divisores: %d\n", soma);
    
    if (soma == num) {
        printf("%d eh um numero perfeito!\n", num);
    } else {
        printf("%d nao eh um numero perfeito!\n", num);
    }
    
    return 0;
}
