#fazer vetor e somar posicoes e depois printar a subtracao 
import math
number = (1,2,3,4,5,6,7,8,9,10)
teste = (23,234,12,12,2,3,4,5,4)
soma = 0;    
for item in range(0,10,1):
    soma = math.pow((soma + number[item]), 2)
    print(soma)
print(soma)

print("\n AQUI A SOMA DOS VETORES\n", number + teste)
for somador in number:
    number[somador] = teste[somador] +number[somador]
    print(number[somador])

sub = 0
for subItem in range(0,6,1):
    sub = sub - number[subItem]
    print(sub)


#   math.sqrt()
#   math.pow(x, y)
#   math.sin()
#   math.cos()
#   math.exp()


