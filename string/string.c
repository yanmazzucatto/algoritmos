#include <stdio.h>

int main (){
    char string[79];

    for(int i = 0; i <= 79; i++ ){
    printf("Digite 79 caracteres: \n");
    scanf("%s", &string[i]);
    }
}