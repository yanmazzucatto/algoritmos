/*Construa uma função par criar uma agenda telefônica com:
Nome; numeroCelular, numeroFixo, Endereço: CEP, numeroCasa; Cidade; e-mail.
Todos os campos e valores deve ter tipos definidos
Entrada via prompt-sync ou redline, permitindo entrada por campo
Saída da busca via console.log
criar uma função agenda telefonica em javascript usando métodos de manipulacão
de vetores com os seguintes dados: nome, numeroCelular, numeroFixo, CEP,
Cidade, numeroCasa, e-mail. Deve permitir inserção e busca por usuário e objeto,
via prompt-sync, ou readline, e saída via console.log, apresentar a função em
javascript e explicações de como desenvolver.
*/

const prompt = require('prompt-sync')();
let agenda = [];

function CriarAgenda(){
  const nome = prompt('Digite o nome: ');
  const cidade = prompt('Digite sua cidade: ');
  const numeroCelular = Number(prompt('Digite o seu numero de celular: '));
  const numeroTelefone = Number(prompt('Digite o seu numero de Telefone: '));
  const cep = Number(prompt('Digite o seu CEP: '));
  const numeroCasa = Number(prompt('Digite o numero da sua casa: '));
  const email = prompt('Digite o seu email: ');

  contato = {
    nome,
    cidade,
    numeroTelefone,
    cep,
    numeroCasa,
    numeroCelular ,
    email  
  }
  agenda.push(contato); 
  console.log(contato)
}


CriarAgenda();
main();


function main(){
    let resposta = prompt('quer criar mais uma agenda? (s/n)');
    if (resposta === "s"){
        CriarAgenda();
        main();
    } else{
    let nResposta = prompt("Digite a posicao da agenda que deseja ver: ")
    console.log(agenda[nResposta]);
    }

    let pesquisa = prompt('busque cidade: ');
    let result = agenda.filter((contato) => contato.cidade === pesquisa)
    console.log(result)

    let busca = prompt("Digite um nome que deseja pesquisar na lista : ");
    let resultNome = agenda.find(contato => contato.nome === busca );
    console.log(resultNome);

}