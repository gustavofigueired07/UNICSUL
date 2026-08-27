#Temos um grupo de pessoas. Escreva um programa em Python que leia o sexo e a altura de cada pessoa, calcule e mostre a altura média das mulheres e dos homens separadamente. 
# Utilize o comando de repetição que desejar

qtd_mulheres = 0
soma_altura_mulheres = 0.0

qtd_homens = 0
soma_altura_homens = 0.0

print("Digite os dados das pessoas (ou digite 'sair' no sexo para encerrar):")

while True:
  sexo = input("\nDigite o sexo (M para Mulher, H para Homem): ").strip().upper()

  if sexo == "SAIR":
    break

  if sexo not in ["M", "H"]:
    print("Sexo inválido! Use 'M' para Mulher ou 'H' para Homem.")
    continue

  try:
    altura = float(input("Digite a altura (ex: 1.75): "))
    
    if altura <= 0:
      print("Altura inválida! Digite um valor maior que zero.")
      continue

  except ValueError:

    print("Entrada inválida! Digite um número para a altura.")
    continue

  if sexo == "M":
    qtd_mulheres += 1
    soma_altura_mulheres += altura

  elif sexo == "H":
    qtd_homens += 1
    soma_altura_homens += altura

print("\n--- Resultado Médias de Altura ---")

if qtd_mulheres > 0:
  media_mulheres = soma_altura_mulheres / qtd_mulheres
  print(f"Altura média das mulheres: {media_mulheres:.2f} m")

else:
  print("Nenhuma mulher foi registrada.")

if qtd_homens > 0:
  media_homens = soma_altura_homens / qtd_homens
  print(f"Altura média dos homens: {media_homens:.2f} m")

else:
  print("Nenhum homem foi registrado.")