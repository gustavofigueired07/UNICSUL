#Elabore um programa em Python que implemente uma calculadora com as funções de somar, subtrair, multiplicar e dividir. O programa deverá solicitar ao usuário os dois valores, 
# e perguntar qual a operação pretendida (‘+’, ‘-‘ , ‘*’ ou ‘/’ ) e a seguir calcular e mostrar o resultado.

num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))
operacao = input("Digite a operação pretendida (+, -, *, /): ").strip()

if operacao == "+":
  resultado = num1 + num2
  print(f"Resultado: {num1} + {num2} = {resultado}")

elif operacao == "-":
  resultado = num1 - num2
  print(f"Resultado: {num1} - {num2} = {resultado}")

elif operacao == "*":
  resultado = num1 * num2
  print(f"Resultado: {num1} * {num2} = {resultado}")

elif operacao == "/":
  if num2 == 0:
    print("Erro: Não é possível dividir por zero.")

  else:
    resultado = num1 / num2
    print(f"Resultado: {num1} / {num2} = {resultado}")

else:
  print("Operação inválida! Por favor, escolha +, -, * ou /.")