#include <stdio.h>
#include <stdlib.h>

int tamanhoVet(int n){
    printf("quantas posicoes voce quer? \n");
    scanf("%d", &n);
    return n;
}

int* preencher(int n ){

    int *v = malloc(n*(sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        printf("digite o numero dessa posicao:  ");
        scanf("%d", &v[i]);
    }

    return v;
}

int* encontrarMaiores(int *v, int n){

    for (int i = 0; i < n; i++)
    {
        if(*v[i]>*v[i++]){
            encontrarMaiores(*v, n);
        }else{
            *v[i] = *v[i++];
            printf("%d", *v[i], "\0\0\0 %d", *v[i++]);
        }
    }
    
}


int main(){
    int n, *v;
    n = tamanhoVet(n);
    v = preencher( *v,  n );
    *v = encontrarMaiores( *v,  n);
}