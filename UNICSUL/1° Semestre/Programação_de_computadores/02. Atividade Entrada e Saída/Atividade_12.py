#Escreva um programa em Python que obtenha uma temperatura em graus Celsius, calcule e mostre a respectiva temperatura nas escalas Fahrenheit e Kelvin. Utilize as fórmulas abaixo:

#Celsiuss
tc = float(input("Digite a temperatura em celsius: "))

#fahrenheit
tf = 1.8 * tc + 32

#Kelvin
tk = tc + 273

print(f"{tc}º graus celsius é igual a {tf} fahrenheit")
print(f"{tc}º graus celsius é igual a {tk} kelvin")