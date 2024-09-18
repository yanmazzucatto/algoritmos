//armazenar idade, numero de estrelas na galaxia, a quantidade de chuva media no mes, e a area do seu quintal
#include <stdio.h>

int main(){
    int idade;
    double num_stars;
    float mm_chuva ,area;

    printf("digite sua idade: ");
    scanf("%d",&idade);
    printf("digite o número de estrelas no céu: ");
    scanf("%lf",&num_stars);
    printf("digite a quantidade media de chuva esse mes: ");
    scanf("%f",&mm_chuva);
    printf("digite a area do seu quintal: ");
    scanf("%f",&area);

    printf("idade: %d\n " ,idade ,"número de estrelas no céu: %lf\n ", num_stars, "quantidade media de chuva: %f\n ", mm_chuva, "Area do quintal: %f\n", area );
    return 0;
}