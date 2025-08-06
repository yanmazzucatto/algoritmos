#include <stdio.h>
#include <string.h>
int main(){

    FILE *arquivo;
    char palavras[500];
    arquivo = fopen("arquivo.c", "w");
    

    while( fscanf(arquivo, "%s", palavras) != EOF){
        printf("palavra lida: %s  \n", palavras);
    }
    fclose(arquivo);
    return 0;


}