const prompt = require("prompt-sync")();

function DefinirTriangulo() {
  let ladoA = parseInt(prompt("Digite o primeiro lado:  "));
  let ladoB = parseInt(prompt("Digite o segundo lado:  "));
  let ladoC = parseInt(prompt("Digite o terceiro lado:  "));
  //verificar se é um triangulo a partir da soma dos lados
  if (ladoA + ladoB > ladoC || ladoA + ladoC > ladoB || ladoB + ladoC > ladoA) {
    console.log(
      "\nPerfeito, agora que você digitou o triângulo, vamos ver qual o tipo dele.\n"
    );
    if (ladoA == ladoB && ladoA == ladoC) {
      console.log("\nTemos um Triangulo Equilátero!\n");
      //detem tres lados iguais
    } else if (
      (ladoA == ladoB && ladoA != ladoC) ||
      (ladoA == ladoC && ladoA != ladoB)
    ) {
      console.log("\nTemos um Triangulo Isóceles!\n");
      //detem 2 lados iguais e um diferente
    } else {
      console.log("\nSeu triangulo é escaleno\n");
      //detem 3 lados diferentes
    }
  }
}

//DefinirTriangulo();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------
function distanciaEuclides() {
  let x1 = parseInt(prompt("Digite o primeiro valor de X: "));
  let x2 = parseInt(prompt("Digite o segundo valor de X: "));
  let y1 = parseInt(prompt("Digite o primeiro valor de Y: "));
  let y2 = parseInt(prompt("Digite o segundo valor de Y: "));
  return console.log(
    "a distancia  é ",
    Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2).toFixed(3))
  );
}

//distanciaEuclides();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------
function maiorIdade() {
  let idade = parseInt(prompt("digite sua idade: "));
  if (idade < 18) {
    console.log("perdao voce ainda é menor de idade;");
  } else if ((idade = 18)) {
    console.log("deu sorte, voce fez 18!");
  } else {
    console.log("Voce ja ta velho");
  }
}

//maiorIdade();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------
function ordenarNum() {
  let qtdNum = Number(
    prompt(
      "quantos numeros voce quer armazenar?  de preferencia digite 5 kkkkkk"
    )
  );
  // fiz uma variacao usando number só pra testar.
  //nessa variavel eu recebo a quantidade de vezes que meu "for" vai rodar
  let numeros = [];
  for (let i = 0; i != qtdNum; i++) {
    let valor = Number(prompt("Digite um numero: "));
    numeros.push(valor);
    //aqui eu jogo os valores recebidos pro fim da variavel
  }

  numeros.sort((a, b) => a - b);
  // e finalizo utilizando a funcao sort para a ordenacao dos valores, mas como eles saem com string, faço a diferenciação com "a" e "b"
  console.log("array: ", numeros);
}

//ordenarNum();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------
function Divisores() {
  let v3 = [];
  let v7 = [];
  let v13 = [];
  //é possivel fazer o decremento de um for utilizando "i--"
  //fiz um "for" que percorre do 100 ao 0
  for (let i = 100; i > 0; i--) {
    //os IFs a seguir fazem verificacoes se o numero é divisivel por zero
    
    if (i % 3 == 0) {
      v3.push(i);
    } else {
      //null
    }

    if (i % 7 == 0) {
      v7.push(i);
    } else {
      //null
    }

    if (i % 13 == 0) {
      v13.push(i);
    } else {
      //null
    }
  }

  console.log("Esses foram os divisiveis de 100 por 3: ", v3);
  console.log("Esses foram os divisiveis de 100 por 7: ", v7);
  console.log("Esses foram os divisiveis de 100 por 13: ", v13);
}

//Divisores();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------
/*
6 - Dado um vetor de animais: C = ["canário”, “"gavião", "cachorra”, “gata”, “arara”, “cavalo”, "sabiá", "porco", "galo"]
Efetue as operações usando, para manipulação dos valores, métodos do objeto array, abordados em sala de aula
i) Criar um novo vetor com a adição de dois répteis no final do vetor, mostrar o vetor na tela
ii) Criar um novo vetor a partir do vetor da alternativa i), com os elementos ou valores entre os índices 2 e 6, mostrar o vetor na tela
iii) Criar um novo vetor a partir do vetor da alternativa i), cujo conteúdo sejam animais de quatro patas, mostrar o vetor na tela
iv) Criar um novo vetor que seja resultado da concatenação do vetor do item iii), com o vetor do item ii), e mostrar o vetor na tela*/

function zoologico(){
  let  C = ["canário " , "gavião ", "cachorra ", "gata ", "arara ", "cavalo ", "sabiá ", "porco", "galo"];

  let reptils = C;
  reptils.push(prompt("digite o seu réptil preferido: "));
  reptils.push(prompt("digite o réptil mais sem graça: "));

  let SemiC = [];
  for (let i = 2; i < 6; i++ ){
    SemiC.push(C[i]);
  }
  
  console.log("\nesse é o vetor de animais com os dois reptils escolhidos", reptils,)
  let quadrupedes = [];

  for (let j = 0; j < C.length; j++ ){
    console.log(` animal "${C[j]}" tem 4 patas?`);
    let respostaPatas = prompt(`Digite  "s"  OU   "n" `);
    if(respostaPatas == "s" || respostaPatas == "S"){
    
      quadrupedes.push(C[j]);
    }  
  }
  console.log("esses sao os animais quadrupedes entao: ", quadrupedes);
  let VetsJuntos = SemiC + quadrupedes;
  console.log("Ultima task - concatenacao de dois vetores:\n  ", VetsJuntos);

}  

//zoologico();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------

function Primos(){
  let valorX = Number(prompt("Digite um valor:"));

  if (valorX < 2){
    console.log(" O numero deve ser mais que dois.");
    return false;
  }  

  for( let i = 2; i = Math.sqrt(valorX) ; i++){
    if( valorX % i == 0){
      console.log(" O valor digitado não é primo. ");
      break;
    }else{
      console.log("seu numero é primo!");
      break;
    }
  }
}
//Primos();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------
function manipulandoVetores(x){
// a) Colocar em ordem crescente:
function ordenarVetores() {
  console.log("v1 ordenado:", [...v1].sort((a, b) => a - b));
  console.log("v2 ordenado:", [...v2].sort((a, b) => a - b));
}

// b) Calcular média:
function mediaVetores() {
  const media = arr => arr.reduce((soma, n) => soma + n, 0) / arr.length;
  console.log("Média v1:", media(v1));
  console.log("Média v2:", media(v2));
}

// c) Maior número de cada vetor:
function maioresVetores() {
  console.log("Maior de v1:", Math.max(...v1));
  console.log("Maior de v2:", Math.max(...v2));
}

ordenarVetores();
mediaVetores();
maioresVetores();
}
//manipulandoVetores(10);
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------

// a) Evita jogadas repetidas e conta repetições:
function contarJogadasRepetidas(jogadas) {
  const contagem = {};
  jogadas.forEach(j => {
    contagem[j] = (contagem[j] || 0) + 1;
  });

  for (let jogada in contagem) {
    if (contagem[jogada] > 1) {
      console.log(`Jogada ${jogada} repetida ${contagem[jogada]} vezes`);
    }
  }
}

// b) Pergunta se jogador quer entrar com jogada inicial:
function entradaJogador() {
  const jogada = prompt("Digite sua jogada inicial:");
  console.log(`Você entrou com a jogada: ${jogada}`);
}

//contarJogadasRepetidas(["cara", "coroa", "cara", "cara", "coroa"]);
//entradaJogador();
//-- CHAME A FUNÇÃO DESEJADA AQUI-------------------------------------------------------------------------------------------------------------------------------------


/*

11- Qual das seguintes palavras-chave é usada para declarar uma variável em JavaScript?
d) Todas as anteriores - var - let - const

Diferencas: Const não pode ser alterada após sua atribuicao; 
Var tem escopo de funcao, ou seja, caso seja usada em um bloco de if, ainda podera ser chamada apos o fechamento do if{} e não dara erro. Exemplo:
function testeVar() {
  if (true) {
    var x = 10;
  }
  console.log(x); // 10
}

Já o 'let' daria erro, pois o escopo dele é de bloco, entao a unica forma de ele funcionar, é estando dentro das {} onde ele foi chamado, exemplo: 
if (true) {
  let mensagem = "Olá, mundo!";
  console.log(mensagem); // Funciona aqui✅
}

console.log(mensagem); // ❌ ReferenceError: mensagem is not defined

12-O que acontece se você declarar uma variável com const e tentar reatribuir um valor?
c) Um erro é gerado - TypeError: Assignment to constant variable.

13- O que if (0) avalia?
c) Falso

14-Como remover o primeiro elemento de um array?
b) shift() -  ele basicamente rouba o primeiro valor, no caso do codigo abaixo ele atribui a outra variavel.
let frutas = ["maçã", "banana", "laranja"];

let primeiraFruta = frutas.shift();

console.log(primeiraFruta); // "maçã"
console.log(frutas);        // ["banana", "laranja"]

15-Qual é a diferença entre var e let?
b) let tem escopo de bloco, enquanto var tem escopo de função

16-Qual das seguintes opções é uma estrutura de controle de fluxo em JavaScript?
d) Todas as anteriores

*/