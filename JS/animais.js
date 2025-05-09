/*
let animais = ["cachorra", "gato", "gamba", "leoa", "cavalo"];
let animais1 = animais.slice(2);
let animais2 = animais.slice(1, 3);
let animais3 = animais.slice(0, -1);
let animais4 = animais.slice(-1);
let animais5 = animais.slice(-3);
console.log("animais1: ", animais1);
console.log("animais2: ", animais2);
console.log("animais3: ", animais3);
console.log("animais4: ", animais4);
console.log("animais5: ", animais5);
console.log("animais: ", animais);

*/

let animais = [
    "Leão", "Elefante", "Gato",
    "Papagaio", "Pombo", "Águia",
    "Cobra", "Lagarto", "Jacaré",
    "Tiranossauro", "Tricerátopo", "Velociraptor"
  ];
  
  let ultimosTres = animais.slice(-3);
  console.log("Últimos três valores:", ultimosTres);
  
  let primeirosTres = animais.slice(0, 3);
  console.log("Primeiros três valores:", primeirosTres);
  
  let doSegundoAoFinal = animais.slice(1);
  console.log("Do segundo até o último:", doSegundoAoFinal);
  
  let mamiferos = animais.slice(0, 3);
  let aves = animais.slice(3, 6);
  let repteis = animais.slice(6, 9);
  let dinossauros = animais.slice(9);
  
  console.log("\n--- Vetores Separados ---");
  console.log("Mamíferos:", mamiferos, "| Tamanho:", mamiferos.length);
  console.log("Aves:", aves, "| Tamanho:", aves.length);
  console.log("Répteis:", repteis, "| Tamanho:", repteis.length);
  console.log("Dinossauros:", dinossauros, "| Tamanho:", dinossauros.length);
  
  console.log("\n Verificando Modificações ");
  console.log("Vetor Original:", animais);
  console.log("Nenhum valor foi modificado, pois slice não altera o array original.");
  