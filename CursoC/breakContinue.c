#include <stdio.h>

int main(){

    int i, j;

    for (i = 1; i < 8 ; i++)
    {
        printf("Valor atual de I: %d \n", i);
        if( i == 4){
            printf("  Aqui foi utilizado o continue \n");
            continue;
        }
    }
    
    for (j = 1; j < 8 ; j++)
    {
        printf("valor atual de J: %d \n", j);
        if( j == 4){
            printf("  Aqui foi utilizado o Break \n");
            break;
        }
    }
}