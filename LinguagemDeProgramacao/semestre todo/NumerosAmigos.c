#include <stdio.h>

int main(void) {
    int a, b = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &a);
    
   
    
    while (1 < a ) {
        a = a / 2;
        printf("  %d \n", a );
        b += a;     
        
    }
    
    printf("Soma dos divisores: %d\n", b);
   
    
    return 0;
}
