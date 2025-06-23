#include <stdio.h>

int main(){

int a, b, resultado;


printf("Digite o primeiro numero:  ");
scanf("%i", &a);
resultado = 0;
printf("\nDigite o primeiro numero:  ");
scanf("%i", &b);


for (int j = 0; j != b; j++){
    resultado = a+resultado;
    }

printf("%i\n", resultado);
}
