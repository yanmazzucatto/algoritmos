#include <stdio.h>
#include <string.h>

int main(){

    char s1[30] = "Olá, prazer";
    char s2[] = " meu caro!"; 

    char *sres= strcat(s1,s2);

    printf("%s", sres);
}