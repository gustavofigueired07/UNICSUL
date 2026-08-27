#Crie um algoritmo que solicite ao usuário o seu turno de trabalho e a quantidade de horas trabalhadas, calcule e mostre o valor do salário. 
# Considere os valores de horas a seguir, de acordo com o turno de trabalho. Caso o turno seja igual a ‘N’ (utilize um caractere para representar) o valor da hora trabalhada
#  é R$ 45,00, caso contrário é R$ 37,50.

print("Digite o turno de trabalho (N para Noturno, D para Diurno):")
turno = input().upper()
print("Digite a quantidade de horas trabalhadas:")
horas_trabalhadas = float(input())

if turno == 'N':

 valor_hora = 45.00

else:

 valor_hora = 37.50

salario = valor_hora * horas_trabalhadas
print("O valor do salário é: R$ %.2f" % salario)