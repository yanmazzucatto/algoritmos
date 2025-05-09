#include <stdio.h>

int main(){
    int nota[4] = {nota[2] = 2, nota[3] = 5, nota[4] = 2};
    int media = (nota[2]+nota[3]+nota[4]) / 2 ;
    int i, n;
    int impressoes[4] = {1,2,3,4};
    // O VETOR PODERIA TER SIDO DECLARADO DA SEGUINTE FORMA: 
    // INT NOTA[4] = { 2 , 3 , 4, 5 };
    // ISSO SE CHAMA LISTA DE INICIALIZACAO 


    // CODIGO INCOMPLETO, SISTEMA DE CONTAR PRINTS E PROGRESSAO ARITMETICA NAO FUNCIONARAM 


    printf("%d   %d   %d \n\n\n", nota[2], nota[3], nota[4]);

    for( i = 1; i < 4; i++)
    {

       
        
        for (n = 1; n < 4; n++)
        {
            printf(" A nota da prova %d", i, " é : %d \n", nota[i]);
            n += impressoes[n];
            printf( "\n Esse foi o print de numero %d \n", n , " e sua progressao aritmetica foi: ");
        }
        

        if (i == 3 ){
            printf("\n A média foi: %d \n\n\n" ,media );

            break;
        }   
    }
}