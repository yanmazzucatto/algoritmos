#include <stdio.h>

int num_vendedor;
float venda, comissao;


int main(){
    printf(" Digite o valor da venda");
        scanf("%f" &venda);

    printf("Digite o código do vendedor");
        scanf("%d" &num_vendedor);

float comissao = (venda*7)/100; 
    printf("%f","\n A comissao do vendedor foi: " &comissao);


}