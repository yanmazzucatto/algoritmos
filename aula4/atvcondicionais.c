#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);

    if ((n1 % 2 == 0) && (n1>10)||(n1<=50)){
        printf("SIM!\n");
    }else {
        printf("NAO!\n");
    }
}