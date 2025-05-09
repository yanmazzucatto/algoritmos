#include <stdio.h>


int main(){

// \0 significa "nulo" e serve para finalizar o reconhecimento de strings (é necessario)

    char nome1[4];

//  FGETS É O MELHOR A SER USADO 


    fgets(nome1,4,stdin);
    scanf("%10[^\n]nome1", nome1); //scanf aprimorado para ler com espaços " " e delimitar o numero de caracteres lidos;
    // esse scanf coloca o \0 no fim dos inputs automaticamente, logo se vc delimitar em 9 posicoes o array, ele lerá os 9 e adicionara o \0 posteriormente
    fflush(stdin);

    printf("digite 4 letras :   \n \n%s",nome1);



}