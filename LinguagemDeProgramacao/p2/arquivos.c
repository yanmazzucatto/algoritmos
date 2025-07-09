#include <stdio.h>
#include <stdlib.h>  // Para exit()

int main() {
    FILE *arquivo;
    
    // Abre ou cria o arquivo "saida.txt" para escrita ("w")
    arquivo = fopen("saida.txt", "w");  // Caminho relativo, seguro

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fprintf(arquivo, "Arquivo criado com sucesso!\n");

    fclose(arquivo);

    printf("Arquivo gravado e fechado.\n");
    return 0;
}
