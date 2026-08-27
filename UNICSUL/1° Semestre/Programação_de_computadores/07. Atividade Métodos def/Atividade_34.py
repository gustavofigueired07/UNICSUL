#Construir um método que receba como parâmetros o valor de uma compra e a quantidade de parcelas e calcula e retorna o valor da parcela, sabendo que a loja acrescenta
#  5% de juros para as compras parceladas.
#No algoritmo principal, solicite para o usuário o valor de uma compra e a quantidade de parcelas e utilizando o método descrito acima, mostre o valor da parcela.

def calcular_parcela(valor_compra, quantidade_parcelas):
  valor_com_juros = valor_compra * 1.05
  parcela = valor_com_juros / quantidade_parcelas

  return parcela

valor_compra = float(input("Digite o valor da compra: R$ "))
quantidade_parcelas = int(input("Digite a quantidade de parcelas: "))
parcela_calculada = calcular_parcela(valor_compra, quantidade_parcelas)

print(f"Valor de cada parcela: R${parcela_calculada:.2f}")