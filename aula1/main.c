#include <stdio.h>

    soma();
    int main(){
        int years;
        float height;
        char name[60];

        printf("Digite seu nome: ");
        fgts (name, 60, stdin);

        printf("digite sua idade: ")
        scanf("%d" &years);

        printf("Digite sua altura: ");
        scanf("%f" &height);

        printf("Sua ficha tecnica é essa: \nIdade: %d\nAltura: %.2f \n  Nome: %s");
    }

    int soma(){
    int dataNasc, dataAtual;

        printf("Em que ano você nasceu? ");
        scanf("%d" &dataNasc);

        printf("Qual o ano atual? ")
        scanf("%d" &dataAtual);

        int idadeAtual = dataAtual - dataNasc;
        printf("Sua idade atual provavelmente é: %d", dataAtual);
    }
