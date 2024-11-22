#include <stdio.h>

int main (){
    char string[79];

    printf("Digite 79 caracteres: \n");
    for(int i = 0; i <= 79; i++ ){
        scanf("%s", &string[i]);
    }
}