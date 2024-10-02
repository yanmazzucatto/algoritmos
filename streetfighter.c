#include <stdio.h>


    int ryu, ryu2 ,ken, ken2, RyuHP = 1000, KenHP = 1000;

    int main(void){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        for (int round =0; round < 3; round++ ){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        scanf("%d", &ryu);
        RyuHP = RyuHP - ryu;
        printf("Valor do Golpe do ken: (numero negativo)\n");
        scanf("%d", &ken);
        KenHP = KenHP - ken;
        }

        if (RyuHP > KenHP)
        {
            printf("ryu ganhou");
        }else if( KenHP > RyuHP){
            printf("ken ganhou");
        } else{
            printf("empate");
        }
        
}