const prompt = require("prompt-sync")();

const entradaUsuario = () => {
    //aqui estou recebendo a quantidade de moedas pela variavel qtd
    let qtd = parseInt(prompt("Digite a quantidade de moedas: ")); 
    return isNaN(qtd) || qtd <= 0 ? 1 : qtd;
};

const geraMoedas = () => {
    //ja nessa funcao, faço uma geração aleatoria de moedas usando as posicoes do vetor para determinar se são 'cara' ou 'coroa'
    let lados = ["cara", "coroa"];
    return lados[Math.floor(Math.random() * 2)]; 
};

const geraJogadaInicial = (qtd) => {
    //aqui é realizado um for, com o objetivo de gerar a quantidade de moedas que o usuario digitou, atraves da funcao geraMoedas
    let jogadas = [];
    for (let i = 0; i < qtd; i++) { 
        jogadas.push(geraMoedas());
    }
    return jogadas;
};

const geraJogadaGeral = (qtd) => Array.from({ length: qtd }, geraMoedas);

const comparaJogadas = (cpu, user) => {
    let resultado = [];
    for (let i = 0; i < cpu.length; i++) {
        resultado.push(cpu[i] === user[i]);
    }
    return resultado;
};

const evitarJogadaRepetida = (novaJogada, jogadaAnterior) => {
    // Compara cada elemento das duas jogadas. Se houver pelo menos uma diferença, retorna true
    for (let i = 0; i < novaJogada.length; i++) {
        if (novaJogada[i] !== jogadaAnterior[i]) {
            return true;
        }
    }
    return false;
};// Esta função foi implementada conforme o enunciado, mas não entendemos como usar ela no jogo. :/
   

const publicaResultado = (cpu, user, comparacoes) => {
    for (let i = 0; i < cpu.length; i++) {
        console.log(`Moeda ${i + 1}: Máquina = ${cpu[i]}, Usuário = ${user[i]} => ${comparacoes[i] ? "IGUAL" : "DIFERENTE"}`);
    }
};

const simuladorJogaMoedas = () => {
    const qtd = entradaUsuario();
    const jogadaUsuario = geraJogadaInicial(qtd);
    const jogadaCPU = geraJogadaGeral(qtd);

    if (!Array.isArray(jogadaUsuario) || !Array.isArray(jogadaCPU)) {
        console.log("Erro ao gerar jogadas. Encerrando o jogo.");
        return;
    }

    const comparacoes = comparaJogadas(jogadaCPU, jogadaUsuario);
    publicaResultado(jogadaCPU, jogadaUsuario, comparacoes);
};

simuladorJogaMoedas();  
