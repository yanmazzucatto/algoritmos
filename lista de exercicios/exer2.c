#include <stdio.h>
#include <math.h>


int main(){
double x, result;

    printf("digite X");
    scanf("%lf", &x);

    result = sqrt(x) + (x/2) + pow(x,x);
    printf("O resultado e: %lf", result);

    return 0;
    }