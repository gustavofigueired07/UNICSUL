#Escreva um programa em Python que solicite ao usuário o salário atual e mostre o salário acrescido de 5% de comissão.

salario = float(input("Digite seu salário atual: "))
comissao = salario * 0.05
salario_com_comisao = salario + comissao

print("O salario com comissão é: ", salario_com_comisao)