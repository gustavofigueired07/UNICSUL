#Escreva um algoritmo que leia um grupo de valores reais e determine quantos valores são positivos e quantos são negativos. Determine, também, 
# qual é o menor desses valores. Utilize o comando de repetição que desejar.

valores_positivos = 0
valores_negativos = 0
menor_valor = None

print("Digite os valores reais (digite 'sair' ou 0 para encerrar):")

while True:
  entrada = input("Digite um número: ").strip().lower()

  if entrada == "sair" or entrada == "0":
    break

  try:
    valor = float(entrada)

    if valor > 0:
      valores_positivos += 1

    elif valor < 0:
      valores_negativos += 1

    if menor_valor is None or valor < menor_valor:
      menor_valor = valor



  except ValueError:
    print("Entrada inválida! Por favor, digite um número real válido.")

print("\n--- Resultado ---")
print(f"Quantidade de valores positivos: {valores_positivos}")
print(f"Quantidade de valores negativos: {valores_negativos}")

if menor_valor is not None:
  print(f"O menor valor digitado foi: {menor_valor}")

else:
  print("Nenhum número válido foi processado.")