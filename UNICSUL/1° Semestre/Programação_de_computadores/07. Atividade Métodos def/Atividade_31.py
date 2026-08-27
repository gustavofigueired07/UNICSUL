#Faça um método que receba como parâmetros o Km inicial, Km final, quantidade de litros gastos e preço do litro. Calcule e mostre: 
# -Distância percorrida;
# -Consumo médio;
# -Valor gasto;
# -Faça um programa principal que solicite para o usuário o valor da quilometragem inicial, final, a quantidade de litros gastos e o preço do litro e mostre a distância percorrida,
#  o consumo médio e o valor gasto, para isso utilize o método definido acima.

def calcular_viagem(km_inicial, km_final, litros, preco_litro):

  distancia = km_final - km_inicial
  consumo_medio = distancia / litros
  valor_gasto = litros * preco_litro

  print(f"Distância percorrida: {distancia:.2f} km")
  print(f"Consumo médio: {consumo_medio:.2f} km/litro")
  print(f"Valor gasto: R${valor_gasto:.2f}")


km_inicial = float(input("Digite a quilometragem inicial: "))
km_final = float(input("Digite a quilometragem final: "))
litros = float(input("Digite a quantidade de litros gastos: "))
preco_litro = float(input("Digite o preço do litro: "))

calcular_viagem(km_inicial, km_final, litros, preco_litro)