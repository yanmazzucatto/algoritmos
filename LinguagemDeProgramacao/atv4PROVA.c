#include <stdio.h>
#include <stdlib.h>
/*| Função    | Descrição                     |
| --------- | ----------------------------- |
| `malloc`  | Aloca memória sem inicializar |
| `calloc`  | Aloca e zera a memória        |
| `realloc` | Redimensiona uma área alocada |
| `free`    | Libera a memória alocada      |
*/
int main(){

int *vetor;
int n;

printf("digite o tamanho do vetor: ");
scanf("%d", &n);

vetor = (int*) malloc(n * sizeof(int));

if(vetor == NULL){
    printf("nao ha valor para ser alocado");
}

for(int i = 0; i > n ; i ++){
    vetor[i] = i *10; 
    printf("%d",vetor[i]) ;
}

free(vetor);
return 0;
}



