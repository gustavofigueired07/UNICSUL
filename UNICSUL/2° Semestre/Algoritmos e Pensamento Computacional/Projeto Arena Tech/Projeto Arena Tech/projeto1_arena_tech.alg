// ============================================================
// Projeto 1 - Arena Tech: Planejador de Maratona Gamer
// Pseudocodigo (Portugol) - equivalente ao programa em C
// ============================================================

algoritmo "projeto1_arena_tech"

var
   participantes, jogadoresPorTime, computadores, quantidadeTimes : inteiro
   potenciaComputador, duracaoEvento, precoKwh, precoKit, outrosCustos : real
   consumoEnergiaKwh, custoEnergia, custoAlimentacao, custoTotal, custoMedioParticipante : real

inicio

   escreva("=== Arena Tech - Planejador de Maratona Gamer ===")

   escreva("Quantidade total de participantes: ")
   leia(participantes)

   escreva("Quantidade de jogadores por time: ")
   leia(jogadoresPorTime)

   escreva("Quantidade de computadores disponiveis: ")
   leia(computadores)

   escreva("Potencia media de cada computador (em Watts): ")
   leia(potenciaComputador)

   escreva("Duracao do evento (em horas): ")
   leia(duracaoEvento)

   escreva("Preco do kWh de energia (R$): ")
   leia(precoKwh)

   escreva("Preco do kit de alimentacao por participante (R$): ")
   leia(precoKit)

   escreva("Outros custos do evento (R$): ")
   leia(outrosCustos)

   // quantidade de times, arredondada para cima (time incompleto conta)
   quantidadeTimes <- ceil(participantes / jogadoresPorTime)

   // consumo de energia em kWh (Watts * horas / 1000)
   consumoEnergiaKwh <- (computadores * potenciaComputador * duracaoEvento) / 1000

   custoEnergia <- consumoEnergiaKwh * precoKwh

   custoAlimentacao <- participantes * precoKit

   custoTotal <- custoEnergia + custoAlimentacao + outrosCustos

   custoMedioParticipante <- custoTotal / participantes

   escreva("=== Relatorio do Evento Arena Tech ===")
   escreva("Quantidade de participantes: ", participantes)
   escreva("Quantidade de times necessarios: ", quantidadeTimes)
   escreva("Consumo estimado de energia (kWh): ", consumoEnergiaKwh)
   escreva("Custo da energia (R$): ", custoEnergia)
   escreva("Custo da alimentacao (R$): ", custoAlimentacao)
   escreva("Custo total do evento (R$): ", custoTotal)
   escreva("Custo medio por participante (R$): ", custoMedioParticipante)

fimalgoritmo
