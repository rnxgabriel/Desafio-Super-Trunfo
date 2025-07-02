Super Trunfo de Países - Desafio Final
Este é um programa em C que implementa a versão final do jogo Super Trunfo de Países. O programa permite cadastrar duas cartas, calcular atributos derivados (densidade populacional e PIB per capita), e comparar as cartas com base em dois atributos escolhidos pelo usuário através de menus interativos. A soma dos atributos determina o vencedor da rodada.
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

Exibição das Cartas: Após o cadastro, o programa exibe os dados das duas cartas, incluindo densidade populacional e PIB per capita calculados.

Escolha dos Atributos:

Primeiro Atributo: Escolha um atributo para comparação através de um menu interativo com as opções:

População

Área

PIB

Número de Pontos Turísticos

Densidade Populacional

PIB per Capita

Segundo Atributo: Escolha um segundo atributo, com um menu dinâmico que exclui o primeiro atributo selecionado.

Comparação e Resultado:

O programa exibe os valores de cada atributo para as duas cartas.
Para cada atributo, exceto Densidade Populacional, a carta com o maior valor vence. Para Densidade Populacional, a carta com o menor valor vence.
A soma dos dois atributos é calculada para cada carta.
A carta com a maior soma vence a rodada. Se as somas forem iguais, o resultado é "Empate!".

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

Escolha o primeiro atributo para comparação:

1. População
2. Área
3. PIB
4. Número de Pontos Turísticos
5. Densidade Populacional
6. PIB per Capita
   Digite a opção (1-6): 3

Escolha o segundo atributo para comparação (diferente do primeiro):

1. População
2. Área
3. Número de Pontos Turísticos
4. Densidade Populacional
5. PIB per Capita
   Digite a opção: 4

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

Comparação de cartas:

Atributo: PIB
Carta 1 - São Paulo (A): 699.28
Carta 2 - Rio de Janeiro (B): 300.50
Resultado: Carta 1 venceu!

Atributo: Número de Pontos Turísticos
Carta 1 - São Paulo (A): 50.00
Carta 2 - Rio de Janeiro (B): 30.00
Resultado: Carta 1 venceu!

Soma dos atributos:
Carta 1 - São Paulo (A): 749.28
Carta 2 - Rio de Janeiro (B): 330.50

Resultado final: Carta 1 venceu!

Notas

O programa utiliza switch para gerenciar os menus interativos e if-else com operadores ternários para realizar as comparações.
Menus dinâmicos são implementados excluindo o primeiro atributo selecionado do menu do segundo atributo.
Entradas inválidas (opções fora do intervalo 1-6 ou atributos iguais) são tratadas com mensagens de erro e encerramento do programa.
O código é bem comentado e estruturado para facilitar manutenção e compreensão.

Sugestão de Commit
"Implementa comparação de dois atributos com menus dinâmicos e soma para determinar vencedor"
