
def calcPotencia(resultado):
    return((resultado+ 2) **3)

numero = 4
resultado = numero // 2
print(resultado)
potencia = calcPotencia(resultado)
print(potencia)
idade = int(input("Digite sua idade:  "))
resultado = idade
potencia = calcPotencia(resultado)
print(potencia)

print(6>7 or 9==10)
print(not 9>10)
nomes = input("digite o nome ")
if (nomes == "jorge"):
    print("Belo nome")
else:
    print("melhore...")