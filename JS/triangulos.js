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
  console.log("Ultima task - concatenacao:\n Esses foram os  ", VetsJuntos);

}  

zoologico();