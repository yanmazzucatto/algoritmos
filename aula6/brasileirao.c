#include <stdio.h>

int num_vitorias, saldo_gols , gols_marcads , cartao_amarelos , cartao_vermelhos, num_vitorias2, saldo_gols2 , gols_marcads2 , cartao_amarelos2 , cartao_vermelhos2;

int main () {

    printf("Insira o número de vitórias: ");
    scanf("%d", &num_vitorias);

    printf("Insira o saldo de gols: ");
    scanf("%d", &saldo_gols);

    printf("Insira o número de gols marcados: ");
    scanf("%d", &gols_marcads);

    printf("Insira o número de cartões amarelos: ");
    scanf("%d", &cartao_amarelos);

    printf("Insira o número de cartões vermelhos: ");
    scanf("%d", &cartao_vermelhos);

    printf("Insira o número de vitórias do time 2: ");
    scanf("%d", &num_vitorias);

    printf("Insira o saldo de gols do time 2: ");
    scanf("%d", &saldo_gols);

    printf("Insira o número de gols marcados do time 2: ");
    scanf("%d", &gols_marcads);

    printf("Insira o número de cartões amarelos do time 2: ");
    scanf("%d", &cartao_amarelos);

    printf("Insira o número de cartões vermelhos do time 2: ");
    scanf("%d", &cartao_vermelhos);


    if (num_vitorias>num_vitorias2){
        printf("O time 1 ganhou");

    } else if (num_vitorias<num_vitorias2){
  printf("O time 2 ganhou");
        
    } else{
        printf("eles estão empatados!");
        if (saldo_gols>saldo_gols2) {
            printf("O time 1 ganhou");        
        
        } else if (saldo_gols<saldo_gols2){
            printf("O time 2 ganhou");

        } else{
            printf("eles estão empatados!");
            if (gols_marcads>gols_marcads2) {
            printf("O time 1 ganhou");        
        
        } else if (gols_marcads<gols_marcads2){
            printf("O time 2 ganhou");
           
            
        }
            
    }
    
    
}
}