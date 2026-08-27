#Escreva um programa em Python que solicite ao usuário os valores de três contas de consumo (p.ex. água, luz e telefone) e o valor de seu salário. 
# Verifique se o salário é suficiente para pagar as três contas, caso não seja apresente a mensagem “Salário insuficiente!”. 
# Caso seja, apresente o valor que restou do salário após pagar as contas.

agua = float(input("Digite o valor da conta de água: R$ "))
luz = float(input("Digite o valor da conta de luz: R$ "))
telefone = float(input("Digite o valor da conta de telefone: R$ "))
salario = float(input("Digite o valor do salário: R$ "))
total_contas = agua + luz + telefone

if salario < total_contas:
 print("Salário insuficiente!")

else:
 restante = salario - total_contas
 print("Após pagar as contas, restará: R$ %.2f" % restante)