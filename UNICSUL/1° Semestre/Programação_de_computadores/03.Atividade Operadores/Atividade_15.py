#Crie um programa em Python que solicite ao usuário a sua idade expressa em anos, meses e dias (variáveis separadas). 
# Calcule e mostre a idade expressa apenas em dias. Para isso considere 1 ano = 365 dias, 1 mês = 30 dias.

idade_anos = int(input("Digite sua idade expressa em anos: "))
idade_meses = int(input("Digite sua idade expressa em meses: "))
idade_dias = int(input("Digite sua idade expressa em dias: "))

dias = (idade_anos * 365)+ (idade_meses * 30) + idade_dias

print(f"idade em dias: {dias}")