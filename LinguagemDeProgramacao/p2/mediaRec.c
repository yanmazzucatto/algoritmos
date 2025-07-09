#include <stdio.h>
#include <stdlib.h>


int media(int *v, int aux, int i, int j){
    
    printf("digite o valor da posicao %d:  ", j);
    scanf("%d", &v[j]);
    aux = v[j] + aux;
    j++;
    if (j < i)
    {
    aux = media( v , aux , i , j );    
    }
    else{
        return aux/i;
    }
    

}


int main(){

    int *v;
    int aux = 0, i = 3, j = 0;
        printf("digite o numero de posicoes do vetor: ");
        scanf("%d", &i);
    v = malloc(i * sizeof(double));
    aux = media( v, aux, i, j);
    printf("A média arrendodada é: %d \n ", aux);

}