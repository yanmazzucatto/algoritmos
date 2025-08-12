#include <stdio.h>

int main(){

    int n1, n2, soma;

    printf("digite o n1:  \n");
    scanf("%d", &n1);
    
    printf("digite o n2:  \n");
    scanf("%d", &n2);

    if (n1 < 0){
        n1 =  n1*(-1);
    } else if (n2 < 0){
        n2 = n2 *(-1);
    }
    soma = n1 + n2;
    printf("%d", soma);

    
}