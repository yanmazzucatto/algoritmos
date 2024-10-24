#include <stdio.h>
#include <math.h>

int main(){
    int matriz[5][2];
    
    for (int i = 0; i < 5; i++){
        for( int j = 0; j < 2; j ++ ){
        printf("digite a nota %d", j + 1);
        scanf("%d", &matriz[i][j]);
        }
    }
    

}