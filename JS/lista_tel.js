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

