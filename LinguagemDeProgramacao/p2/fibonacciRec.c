#include <stdio.h>
#include <stdlib.h>

int fibonacci( int n ){
if (n == 0) return 0;
if (n == 1) return 1;

if (n >= 100) {
    printf("%d", n);
    break;
} else {
    return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){

int n = 0,
n = fibonacci(n);


}