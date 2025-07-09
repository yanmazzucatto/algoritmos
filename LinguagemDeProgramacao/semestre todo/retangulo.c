#include <stdio.h>

int main(){
    int base, altura, resultado, forma;


    printf("qual forma voce deseja escolher:\n 1 = Triangulo; \n 2 = Quadrado; \n 3 = Retangulo;");
    scanf("%d", &forma);

    printf("Insira o valor da base:\n");
    scanf("%d", &base);

    printf("Insira o valor da altura:\n");
    scanf("%d", &altura);


    if(forma == 1){
        resultado =  base * altura / 2; 
        printf(" A area do triangulo é: \n %d", resultado);
    } else if( forma == 2){
        resultado = base * altura;
        printf(" A area do triangulo é: \n %d", resultado);

    }   
    


    resultado = base * altura;

    printf("O resultado é: %d", resultado);



}