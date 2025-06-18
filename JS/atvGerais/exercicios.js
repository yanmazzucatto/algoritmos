let agenda_tel = [
    {
        nome: "pedro",
        numero:213123,
        idoso: true,
        endereço: "rua adasdjasd",
        email: "pedro99@gmail.com",
        cep:"423.423.422-34"
    },
    {
    
        nome: "jose",
        numero:99998823,
        idoso: false,
        endereço: "bairro camoes",
        email: "jose777@hotmail.com",
        cep:"999.429.999-34"
    }
    ];
    console.log("\n Primeiro Print sem Alterações\n");
    console.log("agenda_tel-0", agenda_tel[0]);
    console.log("agenda_tel-1", agenda_tel[1]);
    console.log("agenda_tel-2", agenda_tel[2]);
    
    
    agenda_tel[2] =    {
            nome: "carlos",
            numero:28877133,
            idoso: true,
            endereço: "rua adasdjasd",
            email: "carleira@yahoo.com",
            cep:"423.423.422-34"
        };
    
    console.log(" \n Print com alteração na última Posição \n \n");
    console.log("agenda_tel-0", agenda_tel[0]);
    console.log("agenda_tel-1", agenda_tel[1]);
    console.log("agenda_tel-2", agenda_tel[2]);
      
    agenda_tel[1] = {};
    
    console.log(" \nRemoção dos dados da segunda posição \n");
    console.log("agenda_tel-0", agenda_tel[0]);
    console.log("agenda_tel-1", agenda_tel[1]);
    console.log("agenda_tel-2", agenda_tel[2]);
    
//=================================================================================================================

let musicas = [
    {
        nome: "stairway to heaven",
        autor: " Robert Plant und Jimmy Page",
        Grupo:"Led Zepplin",
        AnoLançamento:"1971",
        Midia:"Todas"
    },
    {
    
        nome: "Master of Puppets",
        autor: "Hetfield, Ulrich, Hammett, Burton",
        Grupo:"Metallica",
        AnoLançamento:"1986",
        Midia:"Todas"
    },
    {
    
        nome: "Cemetery Gates",
        autor: "Vinnie Paul, Dimebag Darrell e Terry Glaze",
        Grupo:"Metallica",
        AnoLançamento:"2006",
        Midia:"Midias Digitais, CD e Vinil"
        //coloquei essa resposta para diferenciar, mas também tem em todas midias
    }
    ];
    
    console.log("musicas-0", musicas[0]);
    console.log("musicas-1", musicas[1]);
    console.log("musicas-2", musicas[2]);

    
    musicas[2] =    {
        nome: "Smells Like Teen Spirit",
        autor: "Kurt Cobain",
        Grupo:"Nirvana",
        AnoLançamento:"1991",
        Midia:"Todas"
        };
    musicas[3] =    {
        nome: "Bachianinha",
        autor: "Paulinho Nogueira",
        Grupo:"Paulinho Nogueira",
        AnoLançamento:"1970",
        Midia:"Todas"
        };

    console.log("musicas-0", musicas[0]);
    console.log("musicas-1", musicas[1]);
    console.log("musicas-2", musicas[2]);
    console.log("musicas-2", musicas[3]);


     
//=================================================================================================================


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
  