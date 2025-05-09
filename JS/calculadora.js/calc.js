function calcular() {
    let num1 = parseFloat(document.getElementById("num1").value);
    let num2 = parseFloat(document.getElementById("num2").value);
    let operador = document.getElementById("operacao").value;
    
    let resultado;
    switch (operador) {
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/': resultado = num2 !== 0 ? num1 / num2 : "Erro: divisão por zero"; break;
        default: resultado = "Operação inválida";
    }

    document.getElementById("resultado").innerText = `Resultado: ${resultado}`;
}
