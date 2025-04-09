#include <stdio.h> 

int main(){

    int num [1000];
    int  i,j;
    int numMaior = 1;

    for( i = 0; i < 1000 ; i++ ){
        printf("digite o numero: ");
        scanf("%i", &num[i] );
    
    }   
    for(j = 0; j < i; j++ ){
        if( num[j] > numMaior){
            numMaior = num[j];
        }
    }
    printf("o numero maior é: %i", numMaior);
}



//Tendo em vista que o programa presente tem um objetivo simples e direto, conseguimos realizar o principio de teste exaustivo,
// que se baseia em testar todas entradas possíveis para comprovar matematicamente que o software funciona.
//Os principais testes a serem feitos nesse programa, seriam: Testar se ele aceita a entrada de caracteres não numerais;
//Testar se ele acerta o maior número do array, independete de sua posição no vetor. Obviamente testar isso digitando 1000 numeros
//é uma tarefa demorada, entao para fazer um teste que funcione de forma escalavel, basta usar um numero menor nas linhas 9 e 5 
//para conseguir testar todas variações em um array de tamanho reduzido.