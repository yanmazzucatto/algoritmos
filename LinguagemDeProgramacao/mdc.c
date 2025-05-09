#include <stdio.h>
//\n
int main(){

    int n = 2;
    int m;

    printf("Digite o Numero a ser Fatorado:  \n");
    scanf("%d",&m);

    while (m != 1 )
    {
        

        if( m % n == 0 ){
            m = m / n; 
            printf("%d  ;  %d \n", m , n );
        } else {
            n = n + 1 ;
        }
    }
    printf("esse foi o M: %d   E esse foi o N: %d ", m, n);

}