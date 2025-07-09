/*
 * Exercício: ler um arquivo texto e contar quantos caracteres e
 * quantas palavras existem nesse arquivo.
 */

#include <stdio.h>

int main() {
    FILE *multiplicadorEx1.c;
    char nomeArq[100], aux;
    int countC=0, countP=0;

    // leitura do nome do arquivo
    printf("Digite o nome do arquivo:");
    scanf("%s", nomeArq);

    // abre e verifica apertura do arquivo
    arq = fopen(nomeArq, "r");
    if(arq == NULL) {
        printf("Erro!");
        return 1;
    }

    while(fscanf(arq, "%c", &aux) != EOF) {
        printf("%c", aux); // imprime conteudo na tela
        countC++; // conta os caracteres
        if(aux == ' ' || aux == '\n')
            countP++; // conta as palavras
    }
    countP++; // adiciona a última palavra do texto

    // imprime as quantidades
    printf("\n\nQtde de caracteres = %d", countC);
    printf("\nQtde de palavras = %d", countP);

    // fecha o arquivo
    fclose(arq);

    return 0;
}
