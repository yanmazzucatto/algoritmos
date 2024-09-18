#include <stdio.h> 
#include <string.h>
#include <locale.h> 

float square, circle, rectangular, side, height;
char geometric_shape;
int main(){


    printf("qual forma deseja? \n 's' (square) ou 'c' (circle) ou 'r' (rectangular)? ");
    scanf("%c", &geometric_shape);

if(geometric_shape == 'c' ){
    printf("\nDigite o valor do raio: \n");
    scanf("%f", &side);
    circle = 3.14 * (side * 2);
    printf("\nA área do circulo é %2.f: ", circle);
    
} else if( geometric_shape == 'r') {
        printf("Qual valor do lado e altura? \n");
        scanf("%f" "%f", &side, &height);
        rectangular = side * height;
        printf("\nA área do retângulo é %2.f: ", rectangular);
    
} else if(geometric_shape == 's'){
        printf("Qual valor do lado? \n");
        scanf("%f", &side);
        square = side * side; 
        printf("\nA área do quadrado é %2.f: ", square);

} else {
    printf("Forma invalida");
}

}