#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf ("Digiti um numero inteiro");
    scanf("%d", &n);
        
        if ((n % 2 == 0) && (n < 100)){
        printf ("O numero e par e menor que 100");
            }    else if (n >= 100){
        printf ("O numero e par e maior que 100");
        } else {
            printf ("O numero e impar e menor que 100");
        }
    

}
        