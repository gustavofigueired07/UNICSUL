#Faça uma programa em Python que peça do usuário um valor em graus para um ângulo. Converta-o para radianos e, usando funções da biblioteca math, 
# imprima o seno, cosseno e tangente deste ângulo.

import math

angulo = float(input("Digite o valor do angulo: "))
radiano = math.radians(angulo)
seno = math.sin(radiano)
cosseno = math.cos(radiano)
tangente = math.tan(radiano)

print(f"Seno: {seno:.2f}")
print(f"Cosseno: {cosseno:.2f}")
print(f"tangente: {tangente:.2f}")