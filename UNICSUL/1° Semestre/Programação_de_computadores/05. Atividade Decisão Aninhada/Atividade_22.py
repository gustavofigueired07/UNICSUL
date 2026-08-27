#Criar um algoritmo que leia a idade de uma pessoa e informe sua classe eleitoral: 
#não-eleitor (abaixo de 16 anos)
#eleitor obrigatório (entre 18 e 65 anos) 
#eleitor facultativo (entre 16 e 18 anos e maior de 65 anos)

idade = int(input("Digite a idade da pessoa: "))

if idade < 0:
  print("Idade inválida! Por favor, digite um valor maior ou igual a zero.")

elif idade < 16:
  print("Classe eleitoral: Não-eleitor")

elif (idade >= 16 and idade < 18) or idade > 65:
  print("Classe eleitoral: Eleitor facultativo")

else:
  print("Classe eleitoral: Eleitor obrigatório")