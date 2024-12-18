#include <stdio.h>

// 2760482421017 Yan Mazzucatto || 2760482421044 Giullia Ladislau 

//o golpe acumula os pontos jogados e faz a verificação através de um IF para ver qual dos personagens receberá o valor inserido.
// O golpe anterior serve para fazer a verificação de quando houve uma troca de round, pois ele verifica se o usuário digitou um numero positivo após ter jogado um número negativo;
//as funções citadas fazem a verificação do golpe para que ele receba a multiplicação do combo se necessário;
// a saida exibe quem venceu através dos pontos acumulados em cada personagem;

int numPerfeito(int combo);
int numTriangular(int combo);

int main(void){
int golpe = 1, golpeAnterior = 1, ryu = 0, ken = 0;
    // loop para o jogo, caso ele digite 0 o jogo acaba
    while (golpe != 0 ){
        ryu = 0;
        ken = 0;

        while (golpeAnterior != 0) {
            printf("Digite o Golpe: (positivo = Ryu, Negativo = Ken)\n");
            scanf("%d", &golpe);
        
            if (golpe == 0) break;

            if(golpe > 0){
                golpe = numPerfeito(golpe);
                ryu += golpe;
            }else if (golpe < 0) {
                int comboGolpe = -golpe; // converte para positivo
            
                    golpe = -numPerfeito(comboGolpe); // mantém o sinal negativo
                    ken += -golpe; // adiciona o valor positivo ao total de Ken
            
        }
    }
        //verificação de quem ganhou 
        if (ryu > ken){
            printf("\nRyu ganhou\n");
        }else if( ken > ryu){
            printf("\nKen ganhou\n");
            } else{
            printf("\nEmpate\n");
            }
            ryu = 0;
            ken = 0;
        
    }
}



// função para verificar se um número é perfeito
int numPerfeito(int combo) {
    int soma = 0; // começa a soma dos divisores em 0
    // verifica todos os números de 1 até n

    for (int i = 1; i < combo; i++) {
        // verificando os divisores do combo
        if (combo % i == 0) { // se i é um divisor de n
            
            soma += i;
        }
    }
    if(soma == combo){
        return combo * 3;
        
    } else {
        int numTringular(int combo);
        
    }

}
// função para verificar se um número é triangular
int numTriangular(int combo) {
    int soma = 0; // começa a soma dos divisores em 0
    // verifica todos os números de 1 até n

    for (int i = 1; i < combo; i++) {
        soma += i;
        if (soma == combo ) { // se i é um divisor de n
            return combo * 2;
        } 
    }
    return combo; 
}