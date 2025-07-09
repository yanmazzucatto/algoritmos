#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    float ra;
    float idade;
} aluno ;

    int main(){
    aluno AlunosVet[5];
    int i;
    float mediaIdade = 0;

    for ( i = 0; i < 5; i++){ 
        printf("Digite a idade do aluno:\n");
        scanf("%f", &AlunosVet[i].idade);
        mediaIdade += AlunosVet[i].idade;
}

    mediaIdade = mediaIdade/5;
    printf("A media da idade é: %.2f \n", mediaIdade);

    return 0;
}
