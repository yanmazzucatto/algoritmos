#include <stdio.h>



void ler(int *temp){

    int temp;
    scanf("%d", &temp);
    *valor = temp; 


}

int calc(int a , int b){

    return a*b;
}

int main( void){
    
    int a,b;

    printf("Digite o valor de A: ");
    ler(&a); // Chama `ler` para armazenar o valor de `a`
    
    printf("Digite o valor de B: ");
    ler(&b); // Chama `ler` novamente para armazenar o valor de `b`
    
    int area = calc(a, b); // Calcula a área chamando `calc`
    
    printf("A área do retângulo é: %d\n", area);
    return 0;
}