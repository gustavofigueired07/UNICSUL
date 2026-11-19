# 🚀 Missão Orbital: Simulador de Treinamento Espacial

Projeto 2 da disciplina **Algoritmos e Pensamento Computacional** (Prof. Vinicius Alves).

Programa em linguagem C que simula o treinamento de cadetes de uma agência espacial: recebe as pontuações de três etapas, impede valores inválidos, calcula a média e informa a classificação final do cadete.

## 👥 Integrantes

| Nome | RGM |
|------|-----|
| Gustavo Figueiredo Soares | 46834796 |
| Leticia Medina | 47592974 |
| Mateus Alves Gouveia |45742561|

## 📋 Descrição

Cada cadete realiza **três etapas** de treinamento. Para cada etapa, o operador digita uma pontuação de **0 a 100**. Ao final, o programa:

1. soma as três pontuações;
2. calcula a média real;
3. classifica o cadete conforme a média;
4. pergunta se o operador deseja avaliar outro cadete.

## 🏅 Classificação

| Média | Classificação |
|-------|---------------|
| 85,0 ou mais | Comandante da missão |
| 70,0 a 84,99 | Piloto aprovado |
| 50,0 a 69,99 | Cadete em recuperação |
| Abaixo de 50,0 | Treinamento reiniciado |

## 🧠 Estruturas utilizadas

| Estrutura | Onde é usada |
|-----------|--------------|
| `for` | Controla as três etapas do treinamento (`etapa` de 1 a 3). |
| `while` | Repete a leitura da pontuação enquanto o valor estiver fora do intervalo de 0 a 100. |
| `do-while` | Permite avaliar outro cadete antes de encerrar o programa. |
| `if / else if / else` | Define a classificação do cadete a partir da média. |
| Contador | A variável `etapa` identifica a etapa atual. |
| Acumulador | A variável `total` soma as pontuações das etapas. |

## 🔤 Variáveis

| Variável | Tipo | Finalidade |
|----------|------|------------|
| `codCadete` | `int` | Código numérico de identificação do cadete. |
| `etapa` | `int` | Contador das etapas (1 a 3). |
| `pontos` | `int` | Pontuação digitada em cada etapa. |
| `total` | `int` | Acumula as três pontuações (zerado a cada novo cadete). |
| `media` | `float` | Média das três etapas. |
| `classificacao` | `char[40]` | Texto da classificação final. |
| `continuar` | `int` | Indica se outro cadete será avaliado (1 = sim, 0 = não). |

## ⚙️ Como compilar e executar

É necessário ter um compilador C instalado (por exemplo, o GCC).

```bash
gcc projeto2_missao_orbital.c -o missao_orbital
./missao_orbital
```

No Windows, execute `missao_orbital.exe` após compilar.

## ▶️ Como usar

1. Digite o código numérico do cadete.
2. Informe a pontuação (0 a 100) de cada uma das três etapas. Se o valor for inválido, o programa pede a pontuação novamente.
3. Veja o resultado: código, pontuação total, média e classificação.
4. Digite `1` para avaliar outro cadete ou `0` para encerrar.

## 🧪 Testes realizados

| Teste | Pontuações | Média | Resultado obtido |
|-------|------------|-------|------------------|
| 1 | 85, 70 e 95 | 83,33 | Piloto aprovado ✅ |
| 2 | 90, 85 e 95 | 90,00 | Comandante da missão ✅ |
| 3 | 40, 50 e 55 | 48,33 | Treinamento reiniciado ✅ |
| Validação | 120, depois 80 | — | 120 recusado e 80 aceito ✅ |

### Exemplo de execução

```
====== MISSÃO ORBITAL ======
 Digite seu código de cadete:
17
Pontuação da etapa 1:
85
Pontuação da etapa 2:
70
Pontuação da etapa 3:
95
---------- RESULTADO ----------
 Cadete: 17
 Pontuação total: 250
 Média: 83.333336
 Classificação: Piloto aprovado
 -------------------------------------
Avaliar outro Cadete? 1-Sim | 0-Não:
```

A captura de tela da execução completa está no arquivo `execução_completa.png`.

## 📁 Arquivos do projeto

- `projeto2_missao_orbital.c`: código-fonte em C
- `execução_completa.png`: captura de tela de uma execução completa
- `README.md`: este documento
