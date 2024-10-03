#include <stdio.h>


    int ryu, ryuscore, ken,kenscore,RyuHP = 1000, KenHP = 1000;

    int main(void){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        
        //loop para contar o numero de rodadas jogadas
        for (int round =0; round < 3; round++ ){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        scanf("%d", &ryu);
        RyuHP = RyuHP - ryu;
        numPerfeito(ryu);

        printf("Valor do Golpe do ken: (numero negativo)\n");
        scanf("%d", &ken);
        KenHP = KenHP - ken;
        numPerfeito(ken);
        }
        //verificação de quem ganhou 
        if (RyuHP > KenHP)
        {
            printf("ryu ganhou");
        }else if( KenHP > RyuHP){
            printf("ken ganhou");
        } else{
            printf("empate");
        }
        
}

//(ryu *(ryu+1)/2)



// Função para verificar se um número é perfeito
int numPerfeito(int combo) {
    int soma = 0; // Começa a soma dos divisores em 0
    // Verifica todos os números de 1 até n/2
    for (int i = 1; i <= combo/ 2; i++) {
        if (combo % i == 0) { // Se i é um divisor de n
            soma += i; // Adiciona i à soma
        }
    }
    return soma == combo*3; // Retorna 1 se a soma for igual a n
}