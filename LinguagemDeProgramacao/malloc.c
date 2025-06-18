#include <stdio.h>
#include <stdlib.h>

int main() {    
    int n;
    double *v1, *v2;

    printf("Digite a quantidade de posições: ");
    scanf("%d", &n);

    v1 = malloc(n * sizeof(double));
    v2 = malloc(n * sizeof(double));

    if (v1 == NULL || v2 == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    double v3[] = v1[] + v2[];
    printf("Memória alocada com sucesso para %d posições.\n Vetores somados:%d ", n, v3 );

    // Libera a memória após o uso
    free(v1);
    free(v2);

    return 0;
}


/*
• Faça uma função que recebe como parâmetro dois vetores de inteiros representando conjuntos de números inteiros, e devolve um outro vetor com o resultado da união dos dois conjuntos. O vetor resultante deve ser alocado dinamicamente.
O protótipo da função é
intuniao (int v1 [], int n1, int v2 [], int n2);
onde n1 e n2 indicam o número de elementos em v1 e v2 respectivamente.
*/

//    printf("digite o numero ")
//  scanf("%d", &n);


/*
  if(v == null && v2 == null){
      print("erro de alocação");
      return 0;
  }
  return 0;
  }
*/


//int * união (int v1 [], int n1, int v2 [], int n2);
