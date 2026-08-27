#Escreva um programa em Python que leia a cotação do dólar (taxa de conversão), leia um valor em dólares e converta e mostre o valor equivalente em Reais. 
cotacao = float(input("Digite a cotação do dolar hoje: "))
dolar = float(input("Digite um valor em dolar: "))
reais = dolar * cotacao 

print(f"${dolar} equivale a R${reais:.2f}")