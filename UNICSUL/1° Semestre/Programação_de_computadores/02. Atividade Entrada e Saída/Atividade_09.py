#Escreva um programa em Python que calcule as duas raízes de uma equação de 2º grau ax²+bx+c, conhecendo os valores dos coeficientes da mesma (a, b, c). 
# Suponha que as raízes são reais. Lembre-se que para calcular as duas raízes: 

print ("Digite os valores de a, b e c da equação de 2° grau ax²+bx+c: ")

input_a = float(input("a: "))
input_b = float(input("b: "))
input_c = float(input("c: "))

delta = (input_b**2) - (4*input_a*input_c)

raiz_1 = ((-input_a)) + (delta**0.5) / (2*input_a)
raiz_2 = ((-input_b)) + (delta**0.5) / (2*input_a)

print ("As raízes da equação são: ", raiz_1, "e", raiz_2)