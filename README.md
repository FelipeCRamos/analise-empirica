# Análise Empírica de Algoritmos de Busca
Disciplina: Estrutura de Dados Básicas I, Universidade Federal do Rio Grande do Norte ([UFRN](http://http://www.ufrn.br))

#### Alunos envolvidos
- [Felipe Ramos](https://github.com/felipecramos/)
- [Oziel Alves](https://github.com/ozielalves/)

## Objetivos
Analisar e avaliar o comportamento **assintótico** dos algoritmos em relação ao seu tempo de execução e número de iterações. Os cenários irão simular a execução dos algoritmos para diversos tamanhos de amostras com tamanhos de elementos *n* crescentes, até atingir o limite da máquina de testes.

## Instruções de uso

### Dependências
#### python3, python3-pip, python3-tk
É necessário para rodar o script de plotagem dos dados.
```bash
# Ubuntu 16.04 LTS
sudo apt-get install python3 python3-pip python3-tk
```
#### Matplotlib
É necessário para exibir os gráficos gerados pelo script de plotagem.
```bash
# Ubuntu 16.04 LTS
pip3 install matplotlib
```
#### g++ Compiler
É necessário para a compilação do programa, visto que ele é feito em c++.
```bash
# Ubuntu 16.04 LTS
sudo apt-get install g++
```

### Compilação
Para compilar, basta usar o seguintes comandos na raiz do repositório:
```bash
# Para compilar apenas
make

# Para compilar e executar o algoritmo com parâmetros pré-definidos
make run

# // =========================== OPCIONAL =========================== //
# Para compilar apenas determinado arquivo
make [arquivo]

# Para limpar dados residuais (objetos, executáveis, dados gerados...)
make clean
```
### Execução
Feito isso, basta rodar o programa com os parametros desejados:
```bash
./bin/analise [TIC] [NT] [I] [NI]
```
+ [TIC] - **_Tamanho inicial do Conjunto_**
    Como o programa é projetado para testar e analisar algoritmos de busca, é necessário definir o número de elementos que o conjunto irá possuir para então, testar nele o algoritmo de busca.

+ [NT] - **_Número de testes_**
    Irá estipular quantas vezes o algoritmo de busca será testado para cada número de incrementos [NI], para depois gerar uma média de tempo/iterações que ele consome.

+ [I] - **_Incremento_**
    Irá definir o incremento obedecendo a seguinte função: _f_(i) = 10^i. Portando, é necessário tomar cuidado com valores acima de 6 (pois já é suficiente para travar um computador de médio porte dependendo da quantidade de incrementos).

+ [NI] - **_Numero de Incrementos_**
	Esse parametro irá definir o número de incrementos que irão acontecer obedecendo os parâmetros estipulados anteriormente.
	
Então, se rodarmos o programa com as seguintes definições:
```bash
./bin/analise 10000 100 5 25
```
Teremos um programa que irá analisar 100 vezes um conjunto constituido com:
```
10000 elementos
10000 + (1 * 10^5) elementos
10000 + (2 * 10^5) elementos
10000 + (3 * 10^5) elementos
...
10000 + (23 * 10^5) elementos
10000 + (24 * 10^5) elementos
10000 + (25 * 10^5) elementos
```

E armazenará a média de tempo e iterações das 100 vezes, gerando gráficos para interpretação posterior. 

_Obs:_ Vale lembrar que o programa pode ficar **bem** pesado caso o incremento estipulado seja muito forte (acima de 6, por exemplo) dada a função crescimento.

#### Plotagem de gráficos
O programa realiza a plotagem de gráficos utilizando um script em python 3 se aproveitando da lib matplotlib.
Para utilizar o script, basta na raiz do repositório executar:
```bash
python3 src/plot.py [A] [I] [Title]
```
+ [A] - **_Algoritmos_**
É um parâmetro composto por uma string bin
+ [I] - 
+ [Title] - 

### Quanto à organização das amostras
É estipulado como parâmetro de execução o tamanho inicial do conjunto [TIC], o número de incrementos [NI] que irão acontecer a cada caso teste e o tamanho do incremento utilizado [TIU].
Após isso, o programa irá gerar um conjunto de `TIC + (NI * TIU)` elementos e preenche-lo com elementos sequenciais crescentes, visto que a grande maioria dos algoritmos testados tem como requisição básica um conjunto **ordenado** de elementos e sem elementos repetidos.

### Quanto às buscas
Todos os algoritmos serão testados contra seu pior caso, ou seja, quando *k* não se encontra no arranjo **A**. 

## Apresentação dos Algoritmos

### Busca Sequencial
<!--Breve explicação-->
	#### Iterativa
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->


### Busca Binária
<!--Breve explicação-->
	#### Iterativa
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->
	#### Recursiva
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->

### Busca Ternária
<!--Breve explicação-->
	#### Iterativa
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->
	#### Recursiva
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->

### Jump Search
<!--Breve explicação-->
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->
	

### Busca Fibonacci
<!--Breve explicação-->
	<!--Pseudo-Código-->
	<!--Complexidade-->
	<!--Gráficos exclusivos-->
		<!--Tempo x Iterações-->
		<!--Tempo x Tamanho-->
		<!--Iterações x Tamanho-->
	<!--Opnião-->
	
## Comparações Gerais
<!--Breve explicação-->
	### Tempo x Iterações
	### Tempo x Tamanho
	### Iterações x Tamanho

<!--Conclusões finais-->

## Condições de Testes
### Informações sobre a maquina utilizada
	<!--Maquina utilizada-->
### Informações sobre os parametros utilizados
	<!--Parametros utilizados-->
### Softwares utilizados
	<!--Softwares utilizados-->
### Dependências necessárias
	<!--Dependências-->
