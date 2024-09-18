#include <stdio.h>
#include <string.h>

float real,dolar,euro,valor,iene, pesos,libraaus;
char moeda[5];


int main(){

float dolar =5.59 ;
float euro = 6.23;
float iene = 0.38;
float pesos = 0.006;
float libraaus = 7.36;

    printf("Digite qual valor dejesa converter?");
        scanf("%f", &valor);
    printf("para qual moeda deseja converter?\n eur;\ndol;\nien;\npesos;\nlibra\n");
        scanf("%s", &moeda);
    if(strcmp(moeda, "eur")==0){
        valor = valor * euro;
            printf("\nO valor da conversao é \n: %.2f", valor );
    } else if (moeda == "dol" ){
        valor = valor*dolar;
            printf("O valor da conversao é \n: %f", dolar );
    } else if (moeda == "libra" ){
        valor = valor*libraaus;
            printf("O valor da conversao é \n: %f", libraaus );
    } else if (moeda == "pesos" ){
        valor = valor*pesos;
            printf("O valor da conversao é \n: %f", pesos );
    } else {
        printf("moeda invalida \n");
    }
    return 0;
}
