#include <stdio.h>

double media(double vet[], int n, int *indice) {
    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }

    double media_vet = soma / n;

    double menor_diferenca = vet[0] - media_vet;  // aqui é feita a verificacao da diferenca entre os valores, para ter um dado comparativo sobre as menores diferencas entre a media
    if (menor_diferenca < 0) menor_diferenca = -menor_diferenca;  //aqui é feita a conversao de numeros negativos para positivos 
    *indice = 0;  //    

    for (int i = 1; i < n; i++) {
        double diferenca = vet[i] - media_vet;
        if (diferenca < 0) diferenca = -diferenca;
        if (diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
            *indice = i;
        }
    }

    return media_vet;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    double vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um valor Double: ");
        scanf("%lf", &vet[i]);
    }

    int indice;
    double resultado = media(vet, n, &indice);
    int posicao = indice+1;
    printf("\nMédia: %.2f\n", resultado);
    printf("Índice do elemento mais próximo da média: %d\n", indice);
    printf("Esse indice se refere a posição: %d\n" , posicao); //coloquei isso para nao gerar confusao entre posicao e indice;
    printf("Valor do elemento mais próximo da média: %.2f\n", vet[indice]);

    return 0;
}
