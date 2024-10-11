#include <stdio.h>

int main(){
    int num, somatoria;

    printf("Digite um número Inteiro: (nao muito grande em!)\n");
    scanf("%d" , &num);

    somatoria = num;
    while (num != 1 ){
        somatoria *= num - 1;
        num--;
    }
    
    printf("O numero fatorial aqui: %d \n" , somatoria);
}