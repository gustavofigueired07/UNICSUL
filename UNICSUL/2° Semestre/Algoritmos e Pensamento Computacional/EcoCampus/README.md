# Projeto 3 - EcoCampus: Monitor de Consumo Inteligente

**Disciplina:** Algoritmos e Pensamento Computacional - Prof. Vinicius Alves (2026/2)

## Integrante

| Nome | RGM |
|------|-----|
| Gustavo Figueiredo Soares |46834796|

## Objetivo

Programa em C que lê o consumo de água de ambientes do campus a partir de um arquivo de texto, calcula indicadores gerais e identifica os locais que ultrapassaram o limite recomendado.

## Arquivos

- `projeto3_ecocampus.c`: código-fonte.
- `consumo_campus.txt`: base de dados usada (20 registros).
- `relatorio_consumo.txt`: relatório gerado pelo programa.

## Como compilar e executar

```
gcc projeto3_ecocampus.c -o ecocampus
./ecocampus
```

No Windows: `ecocampus.exe`. O arquivo `consumo_campus.txt` deve estar na mesma pasta do executável.

## Explicação da solução

1. **Abertura:** `fopen()` abre `consumo_campus.txt` em modo leitura. Se retornar `NULL`, o programa mostra uma mensagem clara e encerra.
2. **Leitura:** um laço `while` com `fscanf("%49s %lf %lf", ...)` lê nome, consumo e limite. O laço só continua enquanto `fscanf` retorna 3 (leitura completa), então funciona com qualquer quantidade de linhas e para sozinho no fim do arquivo.
3. **Cálculos dentro do laço:**
   - `quantidade`: contador, +1 a cada registro lido.
   - `total`: acumulador, soma cada consumo.
   - `maior` e `localMaior`: guardam o maior consumo e o nome do local correspondente (o primeiro registro inicia a comparação).
   - `alertas`: contador, +1 quando `consumo > limite`.
4. **Média:** `total / quantidade`, calculada somente se `quantidade > 0`, evitando divisão por zero.
5. **Relatório:** a função `imprimirRelatorio()` recebe o destino (`stdout` ou um `FILE *`), então a tela e o arquivo `relatorio_consumo.txt` recebem exatamente o mesmo texto. Ao final, os dois arquivos são fechados com `fclose()`.

## Testes realizados

**Teste mínimo (5 registros do enunciado):** Locais: 5, total 3946.50, média 789.30, maior Laboratorio1 (925.00), alertas: 3 (Laboratorio1, Cantina e BlocoB), conforme o esperado.

**Base com 20 registros:** Locais: 20, total 14910.20, média 745.51, maior Jardins (1340.20), alertas: 9.

**Arquivo vazio:** o programa informa que não há registros válidos, sem erro de divisão por zero.

Uso de Inteligência Artificial

A IA foi usada para gerar os 20 registros fictícios de consumo_campus.txt, a partir do prompt sugerido no enunciado (nomes sem espaços, valores positivos com ponto decimal, sem cabeçalho e com alguns locais acima do limite). Os dados foram revisados manualmente, conferindo que cada linha tem três campos válidos.