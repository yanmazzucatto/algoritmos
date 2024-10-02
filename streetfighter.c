#include <stdio.h>


    int ryu, ryu2 ,ken, ken2, RyuHP = 1000, KenHP = 1000;

    int main(void){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        for (int round =0; round < 3; round++ ){

        printf("Valor do Golpe do Ryu: (numero positivo)\n");
        scanf("%d", &ryu);
        ryu2 = ryu2+ ryu;
        printf("Valor do Golpe do ken: (numero negativo)\n");
        scanf("%d", &ken);
        ken2 = ken + ken2;
        }

        if (ryu2 > ken2)
        {
            printf("ryu ganhou");
        }else if( ken2 > ryu2){
            printf("ken ganhou");
        } else{
            ("empate");
        }
        
}