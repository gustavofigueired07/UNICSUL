#Escreva um programa em Python que leia um valor representando o gasto realizado por um cliente do restaurante ComaBem e visualize o valor total a ser pago, 
# considerando os 10% do garçom.

gasto_cliente = float(input("Digite o valor gasto pelo cliente: "))
valor_garcom = gasto_cliente * 0.10
valor_total = gasto_cliente + valor_garcom

print ("O valor total a ser pago é: %.2f" % valor_total)