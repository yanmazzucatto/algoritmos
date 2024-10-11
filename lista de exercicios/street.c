#include <stdio.h>

int main(){

    int ryu, ken, golpeAnterior = 1, golpe = 1;

    printf("Digite o valor dos golpes: \n");
    scanf("%d", &golpe);

    while (golpe != 0 )
    {   
        for ( i = 0; golpeAnterior < count; i++)
        {
            /* code */
        }
         
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