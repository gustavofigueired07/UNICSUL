#Desenvolva um programa em Python que solicite ao usuário os valores dos lados de um retângulo e calcule e mostre seu perímetro e sua área.

print ("Digite os valores dos lados do retângulo: ")

lado_a = float (input("Lado A: "))
lado_b = float (input("Lado B: "))
perimetro = 2 * (lado_a + lado_b)
area = lado_a * lado_b

print ("Área do retângulo = ", area)
print ("Perimetro do retângulo = ", perimetro)