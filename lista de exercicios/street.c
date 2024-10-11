#include <stdio.h>

int main(){

    int ryu, ken, golpeAnterior, golpe = 1;

    printf("Digite o valor dos golpes: \n");
    scanf("%d", &golpe);

    golpeAnterior = golpe;

    while (golpe != 0 )
    {    
        if( golpe > 0){
            ryu = ryu + golpe;
        }else {
            ken = ken +golpe; 
        }
        if(golpeAnterior < 0 && golpe > 0 ){
            printf("Novo Round!");
        }
    }
}