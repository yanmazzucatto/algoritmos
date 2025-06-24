#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numeros;
    int n;

    printf("digite quantos numeros voce quer");
    scanf("%i", &n);

    numeros = malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("\ndigite o numero:  ");
        scanf("%i", &numeros[i]);
    }

    printf("numeros lidos: ");

    for (int j = 0; j < n; j++)
    {
        printf("\n%i\n", numeros[j]);
    }
    free(numeros);    
       return 0 ;
}