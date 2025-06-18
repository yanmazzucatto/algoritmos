"""
i=1

while i < 8:
    print(i)
    i = i+1

print("terminou")
"""

pessoas = ["carlos","pedro","joao"]

for j in pessoas:
    print(j)


#Caso eu faça isso com strings que não são vetores, ele passa em cada Caractere
frase = "As vezes.. Na Vida.."
for letra in frase:
    print(letra)                


investigado = ["pedro","almir","carlos","joao","pedro","almir","carlos","joao","pedro","almir","carlos","joao","carlos","joao","carlos","joao"]
for searcher in range(2,14,2):
    print(investigado[searcher])


#For com PARADA, INICIO e PULO