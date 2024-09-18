#include <stdio.h>

int v1,v2,aux;

int main(){
    printf("Digite o primeiro valor: ");
        scanf("%d", &v1);
    
    printf("Digite o segundo valor: ");
        scanf("%d", &v2);
    
    int aux = v1;
    int v1 = v2;
    int v2 = v1;
    
    printf("%d", "O primeiro valor agora é &v1 e o segundo valor é &v2")

}
