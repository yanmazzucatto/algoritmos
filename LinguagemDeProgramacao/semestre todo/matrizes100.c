#include <stdio.h>


void somaMatrizes(double mat1[2], double mat2[2], double matRes[2], int n){
    int i = 0;
    int j = 0; 
    
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            matRes[i][j]  = mat1[i][j] + mat2[i][j];
        }
        
    }
}

void printMatriz(char nome[], double mat[2][2]){
    printf("Matriz %s", nome);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%0.2f ", mat[i][j]); // %0.2f para mostrar 2 casas decimais
        }
        printf("\n");
    }
    printf("\n");
}

void main(){

    double  A[2][2] = {{1.0, 2.0}, {3.0,4.9}};
    double  B[2][2] = {{5.9,6.3}, {7.9,8.9}};
    double  C[2][2];

    printMatriz("A = ", A);
    printMatriz("B = ", B);
    printMatriz("A+B = ", C);

}