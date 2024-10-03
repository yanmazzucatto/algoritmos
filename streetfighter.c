#include <stdio.h>


    int ryu, ryuscore, ken,kenscore,RyuHP = 1000, KenHP = 1000;

    int main(void){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        
        //loop para contar o numero de rodadas jogadas
        for (int round =0; round < 3; round++ ){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        scanf("%d", &ryu);
        if(ryu = ryu )
        //tentativa de fazer for para numero perfeito

        RyuHP = RyuHP - ryu;
        printf("Valor do Golpe do ken: (numero negativo)\n");
        scanf("%d", &ken);
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

(ryu *(ryu+1)/2)