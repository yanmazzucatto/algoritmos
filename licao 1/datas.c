#include <stdio.h> 
#include <locale.h>

int main(){

    int dia1, dia2,  mes1, mes2, ano1, ano2;

    printf("Digite o dia \nO mês \nE o ano: \n");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data:\n Digite o dia: \n O  mês \n E o ano: \n");
    scanf("%d %d %d" ,&dia2 , &mes2, &ano2);

    if (ano1 > ano2){
        printf("A primeira data é maior");
    }else if( ano1<ano2){
        printf("a segunda data é maior");
    } else{
    if (mes1>mes2){
        printf("a primeira data é maior");
    } else if( mes1<mes2){
        printf("a segunda data é maior");
    } else{
    if (dia1>dia2){
        printf("a primeira data é a maior");
            } else if( dia1 < dia2) {
        printf("a segunda data é maior");
            }
            else{
                printf("As duas datas são iguais");
            }
            
        }
        
    }
        
    
}