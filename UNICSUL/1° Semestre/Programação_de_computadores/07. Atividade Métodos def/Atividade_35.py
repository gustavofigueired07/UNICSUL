#Elabore um programa para calcular a velocidade de três objetos diferentes (com velocidade constante).
#Conhecemos (são dados digitados pelo usuário), para cada objeto, a distância percorrida e o tempo que necessitou para percorrer essa distância.
#Utilize um método geral que calcule e retorne a velocidade de um objeto, fornecidos como parâmetros os dados de distância e tempo.

def calcular_velocidade(distancia, tempo):
  velocidade = distancia / tempo
  return velocidade

for i in range(1, 4):
  print(f"\nObjeto {i}:")
  distancia = float(input(" Digite a distância percorrida (km): "))
  tempo = float(input(" Digite o tempo gasto (horas): "))

  velocidade_calculada = calcular_velocidade(distancia, tempo)
  print(f" Velocidade do objeto {i}: {velocidade_calculada:.2f} km/h")