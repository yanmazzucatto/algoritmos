let listaRound = Array.from({ length: 10 }, () => Math.round(Math.random() * 5) + 1);
let listaFloor = Array.from({ length: 10 }, () => Math.floor(Math.random() * 7));

let maiorR = Math.max(...listaRound);
let menorR = Math.min(...listaRound);

let maiorF = Math.max(...listaFloor);
let menorF = Math.min(...listaFloor);

console.log("Lista Round:", listaRound);
console.log("Maior Round:", maiorR);
console.log("Menor Round:", menorR);

console.log("Lista Floor:", listaFloor);
console.log("Maior Floor:", maiorF);
console.log("Menor Floor:", menorF);


let secondList = Array.from({length: 50}, () => Math.random() *10);
let i;
for( i = 0; i > 25; i++ ){
    console.log(secondList[i]);
}
