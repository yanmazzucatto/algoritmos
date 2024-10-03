#include <stdio.h>


    int numPerfeito(int combo);
    int golpe,ryu, ryuscore, ken,kenscore;
    int main(void){

        //loop para contar o numero de rodadas jogadas
        for (int round = 0; golpe !=0; round++ ){
        
        
        printf("Digite o Golpe: (positivo = Ryu, Negativo = Ken)\n");
        scanf("%d", &golpe);
        if(golpe > 0){
            numPerfeito(ryu);
            ryu = ryu + golpe;
        } else if( golpe < 0 ){
            numPerfeito(ken);
            ken = ken + golpe;
        }

        printf("Valor do Golpe do ken: (numero negativo)\n");
        numPerfeito(ken);
        scanf("%d", &ken);
        ken = numPerfeito(ken);
        }
        //verificação de quem ganhou 
        if (ryu > ken){
            printf("ryu ganhou");
        }else if( ken > ryu){
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