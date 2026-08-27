#Faça um programa em Python que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
#S = 1 + 1/2 + 1/3 + 1/4 +...+ 1/n

n = int(input("Digite um valor inteiro e positivo para n: "))

if n <= 0:
  print("O valor precisa ser positivo e maior que zero.")

else:
  soma = 0.0

  for i in range(1, n + 1):
    soma += 1 / i

  print(f"O resultado da soma S é: {soma:.4f}")