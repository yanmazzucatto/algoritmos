/*
int * initVet(int *size, int *maxSize);

void printVet(int *v, int size, int maxSize);

int *addVet(int *v, int *size, int *maxSize, int e)

*/


#include <stdio.h>
#include <stdlib.h>

// Nesse codigo, será necessário iniciar um vetor com 4 posicoes, onde ele contenha um valor, Sendo assim, Size = 0 e MaxSize = 4. 
//A segunda função se baseia em imprimir o conteudo e tamanhos associados ao vetor V
// adiciona um elemento 

int * initVet(int *size, int *maxSize){
   int *v = malloc(4*sizeof(int));
   *size = 0;
   *maxSize = 4; // AS VAR SIZE E MAXSIZE SÃO INDICADORES PARA AS VAR NA MAIN, POIS DESSA FORMA ELAS CONSEGUEM 
   //MUDAR SEUS VALORES QUANDO O TAMANHO DO VETOR MUDAR, DE FORMA DINAMICA
   return v;
}
void printVet(int *v, int size, int maxSize){
    for (int i = 0; i <= maxSize; i++)
    {
        printf(*v[i]);
    }
    
}

int *addVet(int *v, int *size, int *maxSize, int e){
    if( *size < *maxSize){
        v[*size] = e;
        (*size)++;
        return v;
    } else {
        int *vAux = malloc (2*(*maxSize)*(sizeof(int)));
        int i;

        for(i=0; i < *size; i++)
            vAux[i] = v[i];
        vAux[*size] = e;

        (*size)++;
        *maxSize = 2*(*maxSize);

        free(v);
        return vAux;
    }

}
int find(int *v, int size, int e){

}

int removeVet(int *v, int *size, int *maxSize, int e    ){

}

int main(){

    int *vet, size, maxSize;
    int i;
    
    vet = initVet(&size, &maxSize);


}
