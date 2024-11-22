#include <stdio.h>

int main (){
    char string[80];

    printf("Digite 79 caracteres: \n");
    for(int i = 0; i < 80; i++ ){
        scanf("%s", &string[i]);
        for(int j = i - 1; j < i; j++ ){
            printf("Os caracteres imprimidos foram:\n %s", string[j]);
        }
    }

}