#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *f;
    f = fopen("exerc1.c","r");
    char caracteres[500];

    if (f == NULL){
        printf("nome invalido");
        return 1;
    }
    else{

    while (fgets(caracteres, sizeof(caracteres), f) != NULL) {
        printf("%s", caracteres);
        if (strstr(caracteres, "int ") != NULL)
        {
            printf("%s OLHA O INT AQUI !!!", caracteres);
        }
        else{

        }
        
    }
    }
    fclose(f);
    return 0;
}