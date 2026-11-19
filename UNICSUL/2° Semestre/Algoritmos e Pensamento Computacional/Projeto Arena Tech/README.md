# Projeto 1 - Arena Tech: Planejador de Maratona Gamer

**Disciplina:** Algoritmos e Pensamento Computacional
**Professor:** Vinicius

## Integrantes
- Gustavo Figueiredo Soares - RGM: 04683479-6


## Descrição da solução

O programa `projeto1_arena_tech.c` auxilia na organização da Arena Tech, uma
maratona gamer no campus. Ele solicita, via teclado, os dados do evento
(quantidade de participantes, jogadores por time, computadores, potência
média de cada máquina, duração do evento, preço do kWh, preço do kit de
alimentação e outros custos). Com base nesses valores, calcula a quantidade
de times necessária — usando `ceil()` da biblioteca `math.h` para garantir
que um time incompleto também seja contado —, o consumo estimado de energia
(convertendo Watts e horas para kWh), o custo da energia, o custo da
alimentação (um kit por participante), o custo total do evento e o custo
médio por participante. Todos os valores monetários e de consumo são
exibidos com duas casas decimais usando `%.2f`. O programa não utiliza
estruturas condicionais nem de repetição, conforme solicitado, apenas
variáveis `int` e `float`, entrada com `scanf()`, saída com `printf()`,
operadores aritméticos e conversão de tipos (`cast`).

## Como compilar e executar

```bash
gcc projeto1_arena_tech.c -o projeto1_arena_tech -lm
./projeto1_arena_tech
```

## Teste mínimo exigido

Entradas:
- Participantes: 25
- Jogadores por time: 3
- Computadores: 20
- Potência por computador: 600 W
- Duração: 2 horas
- Preço do kWh: R$ 1,00
- Preço do kit de alimentação: R$ 25,00
- Outros custos: R$ 200,00

Saídas esperadas:
- Times necessários: 9
- Consumo estimado de energia: 24.00 kWh
- Custo da energia: R$ 24.00
- Custo da alimentação: R$ 625.00
- Custo total do evento: R$ 849.00
- Custo médio por participante: R$ 33.96
