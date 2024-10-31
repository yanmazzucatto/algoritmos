#include <stdio.h>

int main(){

    int n1, n2;

    printf("digite o primeiro numero: \n");
    scanf("%d", &n1);
    
    n2 = n1;
    for ( int i = 0; i <= 10; i++)
    {
        n1 += n2;
        n2 = n1;

        printf("\n valores - fibonnaci: %d", n1 );
    }
    //interminado

}