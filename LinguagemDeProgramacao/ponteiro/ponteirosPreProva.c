#include <stdio.h>
#include <string.h>

int main(){

int x = 10, y = 20;
int * p1;
int * p2;
p1 = &x;
p2 = &y;
(*p1)++;
printf("x = %d\n", x);       // x = 11
printf("y = %d\n", y);       // y = 20
printf("*p1 = %d\n", *p1);   // *p1 = 11
printf("*p2 = %d\n", *p2);   // *p2 = 20
printf("*endereco de memoria &p1 %d\n", &p1);   
printf("endereco de memoria &x = %d\n", &x);   
printf("endereco de memoria &y = %d\n", &y);   
printf("print de p1 %d", p1);

}
