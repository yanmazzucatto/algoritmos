#include <stdio.h>
int multiplicador(int a, int b) {
    if (b == 0) {
        return 0;  // caso base
    } else {
        return a + multiplicador(a, b - 1);  // recursão
    }
}

int main() {
    int a, b, resultado;
    scanf("%d %d", &a, &b);

    resultado = multiplicador(a, b);  // só pega o resultado final
    printf("%d\n", resultado);

    return 0;
}



/*int multiplicador(int a, int b, int resultado){
  resultado = a + resultado;
  b = b-1;
   
  if (b > 0)
  {
    multiplicador(a, b, resultado);
  }
  else{
  return resultado;
  }
}

int main(){
  int a = 0;
  int b = 0;
  int resultado = 0;
    printf("Digite o primeiro numero:  ");
      scanf("%i", &a);
      
    
    printf("\nDigite o primeiro numero:  ");
      scanf("%i", &b);

  multiplicador(a,b,resultado);

  resultado = multiplicador(a,b,resultado);
      printf("\n%i\n\n", resultado);
}
*/



/*  ESSE CODIGO NAO SE ENCAIXA EM UMA RECURSIVIDADE
//Aqui será feita a função usada para a recursividade, onde "result" fará o papel de um multiplicador
int multiplicador(int a){ 
  int result = 0;
  result = result+a;
  return result;
}
int main(){

int a, b, resultado;


printf("Digite o primeiro numero:  ");
scanf("%i", &a);
resultado = 0;
printf("\nDigite o primeiro numero:  ");
scanf("%i", &b);
//Esse for auxiliará na recursividade, pois ele irá chamar a função "multiplicador" até que "a" seja multiplicado " b " vezes
for (int i = 0; i < b; i++)
{
    resultado = resultado + multiplicador(a);
}

printf("%i\n", resultado);
}
*/