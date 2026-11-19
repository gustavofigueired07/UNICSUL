#include <stdio.h>
#include <math.h>  

int main() {

    int participantes;          
    int jogadoresPorTime;       
    int computadores;           
    float potenciaComputador;  
    float duracaoEvento;      
    float precoKwh;            
    float precoKit;           
    float outrosCustos;        

    printf("=== Arena Tech - Planejador de Maratona Gamer ===\n\n");

    printf("Quantidade total de participantes: ");
    scanf("%d", &participantes);

    printf("Quantidade de jogadores por time: ");
    scanf("%d", &jogadoresPorTime);

    printf("Quantidade de computadores disponiveis: ");
    scanf("%d", &computadores);

    printf("Potencia media de cada computador (em Watts): ");
    scanf("%f", &potenciaComputador);

    printf("Duracao do evento (em horas): ");
    scanf("%f", &duracaoEvento);

    printf("Preco do kWh de energia (R$): ");
    scanf("%f", &precoKwh);

    printf("Preco do kit de alimentacao por participante (R$): ");
    scanf("%f", &precoKit);

    printf("Outros custos do evento (R$): ");
    scanf("%f", &outrosCustos);

    int quantidadeTimes = (int) ceil((float) participantes / jogadoresPorTime);
    float consumoEnergiaKwh = (computadores * potenciaComputador * duracaoEvento) / 1000.0;
    float custoEnergia = consumoEnergiaKwh * precoKwh;
    float custoAlimentacao = participantes * precoKit;
    float custoTotal = custoEnergia + custoAlimentacao + outrosCustos;
    float custoMedioParticipante = custoTotal / participantes;

    printf("\n=== Relatorio do Evento Arena Tech ===\n\n");
    printf("Quantidade de participantes.......: %d\n", participantes);
    printf("Quantidade de times necessarios....: %d\n", quantidadeTimes);
    printf("Consumo estimado de energia........: %.2f kWh\n", consumoEnergiaKwh);
    printf("Custo da energia....................: R$ %.2f\n", custoEnergia);
    printf("Custo da alimentacao.................: R$ %.2f\n", custoAlimentacao);
    printf("Custo total do evento................: R$ %.2f\n", custoTotal);
    printf("Custo medio por participante..........: R$ %.2f\n", custoMedioParticipante);

    return 0;
}