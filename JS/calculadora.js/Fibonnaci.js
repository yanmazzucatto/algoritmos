function fibonacciAte(max) {
    let fib = [0, 1]; 
    let next = fib[0] + fib[1]; 

    while (next <= max) { 
        fib.push(next); 
        //Por que usar o push: ele adiciona mais uma posicao no final do vetor, dessa forma posso adicionar a soma das duas posicoes ao final do vetor.
        
        
        let tamanho = fib.length;
        next = fib[tamanho - 1] + fib[tamanho - 2]; 
    }

    return fib; 
}

console.log(fibonacciAte(600));
