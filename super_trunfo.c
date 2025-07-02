#include <stdio.h>

// Programa para cadastrar, calcular e comparar duas cartas do Super Trunfo de Países com menu interativo

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

    int opcao;

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
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1; // Converte PIB de bilhões para reais

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
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2; // Converte PIB de bilhões para reais

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

    // Menu interativo para escolha do atributo de comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%d", &opcao);

    // Comparação com base na opção escolhida
    printf("\nComparação de cartas (Atributo: ");
    switch (opcao)
    {
    case 1: // População
        printf("População):\n");
        printf("\nCarta 1 - %s (%c): %d\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
        break;

    case 2: // Área
        printf("Área):\n");
        printf("\nCarta 1 - %s (%c): %.2f km²\n", nome_cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", nome_cidade2, estado2, area2);
        if (area1 > area2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        }
        else if (area1 < area2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
        break;

    case 3: // PIB
        printf("PIB):\n");
        printf("\nCarta 1 - %s (%c): %.2f bilhões de reais\n", nome_cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nome_cidade2, estado2, pib2);
        if (pib1 > pib2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        printf("Número de Pontos Turísticos):\n");
        printf("\nCarta 1 - %s (%c): %d\n", nome_cidade1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
        break;

    case 5: // Densidade Populacional (menor valor vence)
        printf("Densidade Populacional):\n");
        printf("\nCarta 1 - %s (%c): %.2f hab/km²\n", nome_cidade1, estado1, densidade_populacional1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", nome_cidade2, estado2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        }
        else if (densidade_populacional1 > densidade_populacional2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
        break;

    case 6: // PIB per Capita
        printf("PIB per Capita):\n");
        printf("\nCarta 1 - %s (%c): %.2f reais\n", nome_cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%c): %.2f reais\n", nome_cidade2, estado2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2)
        {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        }
        else if (pib_per_capita1 < pib_per_capita2)
        {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }
        break;

    default:
        printf("\nOpção inválida! Por favor, escolha um número entre 1 e 6.\n");
        break;
    }

    return 0;
}