#include <stdio.h>

// Programa para cadastrar, calcular e comparar duas cartas do Super Trunfo de Países com escolha de dois atributos

int main()
{
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    int opcao1, opcao2;
    float soma_atributos1 = 0.0, soma_atributos2 = 0.0;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Menu interativo para escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%d", &opcao1);

    // Validação do primeiro atributo
    if (opcao1 < 1 || opcao1 > 6)
    {
        printf("\nOpção inválida! Programa encerrado.\n");
        return 1;
    }

    // Menu interativo para escolha do segundo atributo (exclui a primeira escolha)
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    if (opcao1 != 1)
        printf("1. População\n");
    if (opcao1 != 2)
        printf("2. Área\n");
    if (opcao1 != 3)
        printf("3. PIB\n");
    if (opcao1 != 4)
        printf("4. Número de Pontos Turísticos\n");
    if (opcao1 != 5)
        printf("5. Densidade Populacional\n");
    if (opcao1 != 6)
        printf("6. PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Validação do segundo atributo
    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 6)
    {
        printf("\nOpção inválida ou igual ao primeiro atributo! Programa encerrado.\n");
        return 1;
    }

    // Comparação dos atributos e cálculo da soma
    printf("\nComparação de cartas:\n");

    // Função auxiliar para exibir o resultado da comparação
    void exibir_resultado(char *atributo, float valor1, float valor2, int carta_vencedora)
    {
        printf("\nAtributo: %s\n", atributo);
        printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, estado1, valor1);
        printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, estado2, valor2);
        printf("Resultado: %s\n", carta_vencedora == 1 ? "Carta 1 venceu!" : carta_vencedora == 2 ? "Carta 2 venceu!"
                                                                                                  : "Empate!");
    };

    // Processa o primeiro atributo
    float valor1_atr1 = 0;
    float valor2_atr1 = 0;
    switch (opcao1)
    {
    case 1:
        valor1_atr1 = populacao1;
        valor2_atr1 = populacao2;
        soma_atributos1 += valor1_atr1;
        soma_atributos2 += valor2_atr1;
        exibir_resultado("População", valor1_atr1, valor2_atr1,
                         populacao1 > populacao2 ? 1 : populacao1 < populacao2 ? 2
                                                                               : 0);
        break;
    case 2:
        valor1_atr1 = area1;
        valor2_atr1 = area2;
        soma_atributos1 += valor1_atr1;
        soma_atributos2 += valor2_atr1;
        exibir_resultado("Área", valor1_atr1, valor2_atr1,
                         area1 > area2 ? 1 : area1 < area2 ? 2
                                                           : 0);
        break;
    case 3:
        valor1_atr1 = pib1;
        valor2_atr1 = pib2;
        soma_atributos1 += valor1_atr1;
        soma_atributos2 += valor2_atr1;
        exibir_resultado("PIB", valor1_atr1, valor2_atr1,
                         pib1 > pib2 ? 1 : pib1 < pib2 ? 2
                                                       : 0);
        break;
    case 4:
        valor1_atr1 = pontos_turisticos1;
        valor2_atr1 = pontos_turisticos2;
        soma_atributos1 += valor1_atr1;
        soma_atributos2 += valor2_atr1;
        exibir_resultado("Número de Pontos Turísticos", valor1_atr1, valor2_atr1,
                         pontos_turisticos1 > pontos_turisticos2 ? 1 : pontos_turisticos1 < pontos_turisticos2 ? 2
                                                                                                               : 0);
        break;
    case 5:
        valor1_atr1 = densidade_populacional1;
        valor2_atr1 = densidade_populacional2;
        soma_atributos1 += valor1_atr1;
        soma_atributos2 += valor2_atr1;
        exibir_resultado("Densidade Populacional", valor1_atr1, valor2_atr1,
                         densidade_populacional1 < densidade_populacional2 ? 1 : densidade_populacional1 > densidade_populacional2 ? 2
                                                                                                                                   : 0);
        break;
    case 6:
        valor1_atr1 = pib_per_capita1;
        valor2_atr1 = pib_per_capita2;
        soma_atributos1 += valor1_atr1;
        soma_atributos2 += valor2_atr1;
        exibir_resultado("PIB per Capita", valor1_atr1, valor2_atr1,
                         pib_per_capita1 > pib_per_capita2 ? 1 : pib_per_capita1 < pib_per_capita2 ? 2
                                                                                                   : 0);
        break;
    }

    // Processa o segundo atributo
    float valor1_atr2 = 0, valor2_atr2 = 0;
    switch (opcao2)
    {
    case 1:
        valor1_atr2 = populacao1;
        valor2_atr2 = populacao2;
        soma_atributos1 += valor1_atr2;
        soma_atributos2 += valor2_atr2;
        exibir_resultado("População", valor1_atr2, valor2_atr2,
                         populacao1 > populacao2 ? 1 : populacao1 < populacao2 ? 2
                                                                               : 0);
        break;
    case 2:
        valor1_atr2 = area1;
        valor2_atr2 = area2;
        soma_atributos1 += valor1_atr2;
        soma_atributos2 += valor2_atr2;
        exibir_resultado("Área", valor1_atr2, valor2_atr2,
                         area1 > area2 ? 1 : area1 < area2 ? 2
                                                           : 0);
        break;
    case 3:
        valor1_atr2 = pib1;
        valor2_atr2 = pib2;
        soma_atributos1 += valor1_atr2;
        soma_atributos2 += valor2_atr2;
        exibir_resultado("PIB", valor1_atr2, valor2_atr2,
                         pib1 > pib2 ? 1 : pib1 < pib2 ? 2
                                                       : 0);
        break;
    case 4:
        valor1_atr2 = pontos_turisticos1;
        valor2_atr2 = pontos_turisticos2;
        soma_atributos1 += valor1_atr2;
        soma_atributos2 += valor2_atr2;
        exibir_resultado("Número de Pontos Turísticos", valor1_atr2, valor2_atr2,
                         pontos_turisticos1 > pontos_turisticos2 ? 1 : pontos_turisticos1 < pontos_turisticos2 ? 2
                                                                                                               : 0);
        break;
    case 5:
        valor1_atr2 = densidade_populacional1;
        valor2_atr2 = densidade_populacional2;
        soma_atributos1 += valor1_atr2;
        soma_atributos2 += valor2_atr2;
        exibir_resultado("Densidade Populacional", valor1_atr2, valor2_atr2,
                         densidade_populacional1 < densidade_populacional2 ? 1 : densidade_populacional1 > densidade_populacional2 ? 2
                                                                                                                                   : 0);
        break;
    case 6:
        valor1_atr2 = pib_per_capita1;
        valor2_atr2 = pib_per_capita2;
        soma_atributos1 += valor1_atr2;
        soma_atributos2 += valor2_atr2;
        exibir_resultado("PIB per Capita", valor1_atr2, valor2_atr2,
                         pib_per_capita1 > pib_per_capita2 ? 1 : pib_per_capita1 < pib_per_capita2 ? 2
                                                                                                   : 0);
        break;
    }

    // Exibe a soma dos atributos e determina o vencedor
    printf("\nSoma dos atributos:\n");
    printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, estado1, soma_atributos1);
    printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, estado2, soma_atributos2);
    printf("\nResultado final: %s\n", soma_atributos1 > soma_atributos2 ? "Carta 1 venceu!" : soma_atributos1 < soma_atributos2 ? "Carta 2 venceu!"
                                                                                                                                : "Empate!");

    return 0;
}