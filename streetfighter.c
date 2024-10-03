#include <stdio.h>


    int numPerfeito(int combo);
    int golpe,ryu, ryuscore, ken,kenscore,RyuHP = 1000, KenHP = 1000;
    int main(void){

        //loop para contar o numero de rodadas jogadas
        for (int round = 0; golpe !=0; round++ ){
        
        
        printf("Digite o Golpe: (positivo = Ryu, Negativo = Ken)\n");
        scanf("%d", &golpe);
        if(golpe > 0){
            ryu = ryu + golpe;
        }
        ryu = numPerfeito(ryu);
        RyuHP = RyuHP - ryu;

        printf("Valor do Golpe do ken: (numero negativo)\n");
        numPerfeito(ken);
        scanf("%d", &ken);
        ken = numPerfeito(ken);
        KenHP = KenHP - ken;
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
        // Aqui você só está verificando se o número é divisível pelo combo
        if (combo % i == 0) { // Se i é um divisor de n
            // Aqui você só está somando se ele for divisível
            soma += i; 
            }
        }
        if(soma == combo){
            return combo * 3;
        } else{
            return combo;
        }

}