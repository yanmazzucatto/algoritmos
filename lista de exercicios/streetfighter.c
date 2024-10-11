#include <stdio.h>


int numPerfeito(int combo);
int numTriangular(int combo);

int main(void){
int golpe = 1, golpeAnterior = 1, ryu = 0, ken = 0, roundWin[2] = {0, 0};
    // Loop para o jogo
    while (golpe != 0 ){
        ryu = 0;
        ken = 0;

        while (golpeAnterior != 0) {
            printf("Digite o Golpe: (positivo = Ryu, Negativo = Ken)\n");
            scanf("%d", &golpe);
        
            if (golpe == 0) break;

            if(golpe > 0){
                golpe == numPerfeito(golpe);
                ryu += golpe;
            }else if (golpe < 0) {
                int comboGolpe = -golpe; // Converte para positivo
                if (numPerfeito(comboGolpe) > comboGolpe) {
                    golpe = -numPerfeito(comboGolpe); // Mantém o sinal negativo
                    ken += -golpe; // Adiciona o valor positivo ao total de Ken
            }
        }
        //verificação de quem ganhou 
        if (ryu > ken){
            printf("\nryu ganhou\n");
        }else if( ken > ryu){
            printf("\nken ganhou\n");
        } else{
            printf("\nempate\n");
        }

            ryu = 0;
            ken = 0;
        }
        
    }
}



// Função para verificar se um número é perfeito
int numPerfeito(int combo) {
    int soma = 0; // Começa a soma dos divisores em 0
    // Verifica todos os números de 1 até n

    for (int i = 1; i < combo; i++) {
        // Verificando os divisores do combo
        if (combo % i == 0) { // Se i é um divisor de n
            // Aqui você só está somando se ele for divisível
            soma += i;
        }
    }
    if(soma == combo){
        printf("\nESSE GOLPE FOI UM COMBO!!!! \n");
        return combo * 3;
        
    } else {
        int numTringular(int combo);
        
    }

}
// Função para verificar se um número é triangular
int numTriangular(int combo) {
    int soma = 0; // Começa a soma dos divisores em 0
    // Verifica todos os números de 1 até n

    for (int i = 1; i < combo; i++) {// Aqui você só está verificando se o número é divisível pelo combo
        soma += i;
        if (soma == combo ) { // Se i é um divisor de n
        printf("\nESSE GOLPE FOI UM COMBO triangular!!!! \n");
            return combo * 2;
        } 
    }
    return combo; 
}