# Um comerciante calcula o valor da venda, tendo em vista a tabela a seguir: 
#Crie uma programa que permita digitar o nome do produto e valor da compra, e imprimindo o nome do produto e o valor da venda.

nome_produto = input("Digite o nome do produto: ")
valor_compra = float(input("Digite o valor de compra do produto: R$ "))

if valor_compra < 10.00:
  lucro = 0.70

elif valor_compra < 30.00:
  lucro = 0.50

elif valor_compra < 50.00:
  lucro = 0.40

else:
  lucro = 0.30

valor_venda = valor_compra * (1 + lucro)

print(f"\nProduto: {nome_produto}")
print(f"Valor de venda: R$ {valor_venda:.2f}")