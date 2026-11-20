# RankLab: Central de Ordenação Inteligente

**Projeto 4 | Algoritmos e Pensamento Computacional | Prof. Vinicius Alves | 2026/2**

## Integrantes

| Nome | RGM |

Guilherme França Alves  47551640 
Leticia Medina 47592974
Mateus Alves 45742561
Gustavo Figueiredo 46834796

## Sobre o projeto

Programa em C que lê dez pontuações (0 a 100), preserva o vetor original, cria três cópias independentes e ordena os mesmos dados com **Bubble Sort**, **Selection Sort** e **Insertion Sort**. Ao final, o programa:

- exibe o vetor original e os três vetores ordenados;
- confirma se os três resultados são equivalentes;
- informa a menor pontuação, a maior pontuação e a mediana;
- mostra quantas comparações cada método realizou.

O programa não usa variáveis globais. Os vetores são enviados às funções por parâmetro, e a `main()` apenas coordena o fluxo, deixando a lógica de cada ordenação na função correspondente.

## Como compilar e executar

Arquivo: `projeto4_ranklab.c`

```bash
gcc projeto4_ranklab.c -o ranklab
./ranklab
```

No Windows (MinGW), execute com `ranklab.exe`.

Ao rodar, digite as dez pontuações, uma por vez. Valores fora do intervalo de 0 a 100 são recusados e solicitados novamente.

## Funções implementadas

| Função | Responsabilidade |
|---|---|
| `void exibirCabecalho(void)` | Exibe o título do sistema |
| `void lerPontuacoes(int v[], int tamanho)` | Lê e valida as pontuações (0 a 100) |
| `void copiarVetor(int origem[], int destino[], int tamanho)` | Copia o vetor original para as cópias |
| `void exibirVetor(int v[], int tamanho)` | Exibe os elementos de um vetor |
| `int bubbleSort(int v[], int tamanho)` | Ordena e devolve o total de comparações |
| `int selectionSort(int v[], int tamanho)` | Ordena e devolve o total de comparações |
| `int insertionSort(int v[], int tamanho)` | Ordena e devolve o total de comparações |
| `int vetoresIguais(int a[], int b[], int tamanho)` | Retorna 1 se os vetores são iguais e 0 caso contrário |

## Explicação resumida dos métodos

### Bubble Sort
Percorre o vetor comparando pares de elementos vizinhos. Se o da esquerda for maior que o da direita, eles trocam de lugar. A cada passada completa, o maior elemento restante "sobe" para o final do vetor, como uma bolha. Por isso, a cada volta do laço externo, o laço interno precisa olhar uma posição a menos (`tamanho - 1 - i`).

### Selection Sort
Em cada etapa, procura a **posição do menor elemento** na parte ainda não ordenada do vetor e troca esse elemento com o da posição atual. Assim, a primeira posição recebe o menor valor, a segunda recebe o segundo menor, e assim por diante. Faz no máximo uma troca por etapa, mas sempre precisa percorrer toda a parte restante para ter certeza de qual é o menor.

### Insertion Sort
Mantém a parte esquerda do vetor sempre ordenada. Para cada novo elemento (`valorAtual`), o algoritmo o compara com os elementos à esquerda, **deslocando para a direita** os que forem maiores, até encontrar a posição correta, onde o elemento é inserido. É como organizar cartas de baralho na mão: pega uma carta e a encaixa no lugar certo entre as que já estão ordenadas.

## Como as comparações foram contadas

- **Bubble Sort:** uma comparação cada vez que `v[j]` é comparado com `v[j + 1]`.
- **Selection Sort:** uma comparação cada vez que `v[j]` é comparado com `v[posicaoMenor]`.
- **Insertion Sort:** uma comparação cada vez que `v[j]` é comparado com `valorAtual`, **incluindo** a comparação que encerra o deslocamento (quando o elemento à esquerda não é maior). Quando `j` chega a -1, não há comparação, pois não existe elemento à esquerda.

Com 10 elementos, Bubble e Selection fazem sempre 45 comparações, porque seguem o mesmo percurso independentemente da ordem dos dados. O Insertion Sort depende da ordem inicial: faz poucas comparações com o vetor quase ordenado e chega a 45 no pior caso.

## Resultados dos testes

| Teste | Entrada | Bubble | Selection | Insertion |
|---|---|---|---|---|
| 1 - exemplo | 78, 95, 62, 88, 74, 91, 55, 83, 69, 100 | 45 | 45 | 29 |
| 2 - já ordenado | 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 | 45 | 45 | 9 |
| 3 - ordem inversa | 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 | 45 | 45 | 45 |

Nos testes 1, 2 e 3, os três métodos produziram a mesma sequência crescente (`Resultados equivalentes: SIM`).


### Outros testes realizados

| Teste | Entrada | Resultado |
|---|---|---|
| 4 - repetidos | 70, 50, 70, 90, 50, 80, 90, 60, 80, 60 | 50, 50, 60, 60, 70, 70, 80, 80, 90, 90 (Insertion: 26 comparações) |
| Validação | -5 e depois 75 | O valor -5 é recusado e o 75 é aceito |


## Cálculos após a ordenação

- **Menor pontuação:** primeiro elemento do vetor ordenado (`bubble[0]`).
- **Maior pontuação:** último elemento do vetor ordenado (`bubble[tamanho - 1]`).
- **Mediana:** média entre os elementos das posições 4 e 5 do vetor ordenado de dez valores: `(bubble[4] + bubble[5]) / 2.0`.
