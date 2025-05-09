const prompt = require("prompt-sync")();

let inicial = parseFloat(prompt("Digite o valor inicial: "));
let i = parseFloat(prompt("Digite o juros mensal (ex: 0.05 para 5%): "));
let n = parseInt(prompt("Digite o número de meses: "));

let calculo = (inicial * i) / (1 - Math.pow(1 + i, -n));

console.log(`O valor da parcela será: R$ ${calculo.toFixed(2)}`);
