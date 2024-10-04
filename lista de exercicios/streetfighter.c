#include <stdio.h>


int numPerfeito(int combo);
int golpe = 1, golpeAnterior, ryu, ken;

int main(void){

    // Looop para o jogo
    while (golpe != 0 ){
        printf("Digite o Golpe: (positivo = Ryu, Negativo = Ken)\n");
        scanf("%d", &golpe);
        if(golpe > 0){
            golpe = numPerfeito(golpe);
            ryu += golpe;
        } else if( golpe < 0 ){
            golpe = numPerfeito(golpe);
            ken += golpe;
        }
        // Loop para os round
        while (golpeAnterior < 0 && golpe > 0) {

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
            
}

//(ryu *(ryu+1)/2)



// Função para verificar se um número é perfeito
int numPerfeito(int combo) {
    int soma = 0; // Começa a soma dos divisores em 0
    // Verifica todos os números de 1 até n

    for (int i = 1; i < combo; i++) {
        // Aqui você só está verificando se o número é divisível pelo combo
        if (combo % i == 0) { // Se i é um divisor de n
            // Aqui você só está somando se ele for divisível
            soma += i;
        }
    }
    if(soma == combo){
        return combo * 3;
        printf("\nES SE GOLPE FOI UM COMBO!!!! \n");
    } else{
        return combo;
    }

}
// Função para verificar se um número é perfeito
int numTriangular(int combo) {
    int soma = 0; // Começa a soma dos divisores em 0
    // Verifica todos os números de 1 até n

    for (int i = 1; i < combo; i++) {
        // Aqui você só está verificando se o número é divisível pelo combo
        if (combo % i == 0) { // Se i é um divisor de n
            // Aqui você só está somando se ele for divisível
            soma += i;
        }
    }
    if(soma == combo){
        return combo * 3;
        printf("\nES SE GOLPE FOI UM COMBO!!!! \n");
    } else{
        return combo;
    }

}