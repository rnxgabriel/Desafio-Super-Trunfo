Super Trunfo de Países
Este é um programa em C que implementa um jogo de Super Trunfo com cartas representando cidades. O programa permite cadastrar duas cartas, calcular atributos derivados (densidade populacional e PIB per capita) e comparar as cartas com base em um atributo escolhido pelo usuário através de um menu interativo.
Como Compilar e Executar
Pré-requisitos

Um compilador C (como gcc)
Sistema operacional compatível (Windows, Linux, macOS)

Instruções de Compilação

Salve o código em um arquivo chamado super_trunfo.c.
Abra um terminal na pasta onde o arquivo está localizado.
Compile o programa com o comando:gcc super_trunfo.c -o super_trunfo

Execute o programa com:./super_trunfo

Instruções de Uso

Cadastro das Cartas: O programa solicita os dados de duas cartas, uma de cada vez. Para cada carta, insira:

Estado: Uma letra de A a H.
Código da Carta: Uma string no formato letra+número (ex.: A01, B02).
Nome da Cidade: O nome da cidade (pode conter espaços).
População: Um número inteiro representando a população.
Área: Um número decimal representando a área em km².
PIB: Um número decimal representando o PIB em bilhões de reais.
Número de Pontos Turísticos: Um número inteiro.

Exibição das Cartas: Após o cadastro, o programa exibe os dados das duas cartas, incluindo os valores calculados para densidade populacional e PIB per capita.

Menu de Comparação: Um menu interativo é apresentado com as seguintes opções:

População

Área

PIB

Número de Pontos Turísticos

Densidade Populacional

PIB per Capita

Digite o número correspondente ao atributo desejado para comparação.

Resultado da Comparação: O programa exibe:

O atributo escolhido.
Os valores do atributo para cada carta.
A carta vencedora (ou "Empate!" se os valores forem iguais).
Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence. Para Densidade Populacional, a carta com o menor valor vence.

Exemplo de Uso
Entrada:
Digite os dados da Carta 1:
Estado (A a H): A
Código da Carta (ex: A01): A01
Nome da Cidade: São Paulo
População: 12300000
Área (em km²): 1521.11
PIB (em bilhões de reais): 699.28
Número de Pontos Turísticos: 50

Digite os dados da Carta 2:
Estado (A a H): B
Código da Carta (ex: B02): B02
Nome da Cidade: Rio de Janeiro
População: 6000000
Área (em km²): 1200.25
PIB (em bilhões de reais): 300.50
Número de Pontos Turísticos: 30

Escolha o atributo para comparação:

1. População
2. Área
3. PIB
4. Número de Pontos Turísticos
5. Densidade Populacional
6. PIB per Capita
   Digite a opção (1-6): 3

Saída:
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12300000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8086.49 hab/km²
PIB per Capita: 56852.46 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6000000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 4998.96 hab/km²
PIB per Capita: 50083.33 reais

Comparação de cartas (Atributo: PIB):

Carta 1 - São Paulo (A): 699.28 bilhões de reais
Carta 2 - Rio de Janeiro (B): 300.50 bilhões de reais

Resultado: Carta 1 (São Paulo) venceu!

Notas

O programa utiliza a estrutura switch para gerenciar o menu interativo e if-else para realizar as comparações.
O código trata entradas inválidas no menu através de um caso default no switch.
Os cálculos de densidade populacional e PIB per capita são realizados automaticamente após a entrada dos dados.
O código é comentado para facilitar a manutenção e compreensão.
