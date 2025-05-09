function VerificarPais(){
const paisorigem = document.getElementById("origem").value;
const paisatual = document.getElementById("paisatual").value;

let res;

if( paisorigem == paisatual) {
    res == console.log("voce mora onde nasceu");
} else {
    res = console.log("seu pais de origem é "+paisorigem+" e seu pais atual é "+paisatual+"; Logo, Voce é estrangeiro");
}

    document.getElementById("res").innerHTML = res;
}

