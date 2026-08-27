#Escreva um programa em Python para calcular o valor de uma prestação em atraso (prestacao). Para isso, obtenha o valor da prestação (valorPrestacao), a 
# porcentagem de multa pelo atraso (multa) e a quantidade de dias de atraso (qtdeDias). Calcular e mostrar o valor da prestação atualizado, sabendo que: 
#prestacao=valorPrestacao+(valorPrestacao*(multa/100)*qtdeDias)

valor_prestacao = float(input("valor da prestação: "))
multa = float(input("porcentagem da multa pelo atraso: "))
qtdeDias = float(input("quantidade de dias de atraso: "))
prestacao = valor_prestacao+(valor_prestacao*(multa/100)*qtdeDias)
print(f"Valor da prestação atualizado: {prestacao}")