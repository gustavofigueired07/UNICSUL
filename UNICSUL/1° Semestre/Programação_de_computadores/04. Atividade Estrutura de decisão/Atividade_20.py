#Faça um programa em Python que obtenha o valor de uma compra, calcular e mostrar o valor da compra considerando o desconto, conforme descrito abaixo: 
#Para compras acima de R$ 200 a loja dá um desconto de 20%
#Para as abaixo disso não tem desconto, mostre o valor da compra. 

valor = float(input("Digite o valor da compra: R$ "))

if valor > 200:
 desconto = valor * 0.20
 valor_final = valor - desconto

else:
 valor_final = valor

print("Valor final da compra: R$ %.2f" % valor_final)