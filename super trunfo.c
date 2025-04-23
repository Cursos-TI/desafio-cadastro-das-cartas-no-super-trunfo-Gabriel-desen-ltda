#include <stdio.h>

int main() {
    int turisticos1, turisticos2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadep1, pibper1, densidadep2, pibper2;
    char pais1[30], estado1[30], cidade1[30];
    char pais2[30], estado2[30], cidade2[30];

    // Entrada de dados para a primeira carta
    printf("Digite o nome do pais:\n");
    scanf("%s", pais1);

    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &turisticos1);

    // Entrada de dados para a segunda carta
    printf("Digite o nome do pais:\n");
    scanf("%s", pais2);

    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &turisticos2);

    // Calculando densidade populacional e PIB per capita
    densidadep1 = (populacao1 / area1);
    densidadep2 = (populacao2 / area2);
    pibper1 = (float)(pib1 / populacao1);
    pibper2 = (float)(pib2 / populacao2);

    // Exibição de dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: A01\n");
    printf("Nome do pais: %s\n", pais1);
    printf("Nome do estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Area: %.2f\n", area1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f\n", densidadep1);
    printf("PIB per capita: %.2f\n", pibper1);

    // Exibição de dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Codigo: B02\n");
    printf("Nome do pais: %s\n", pais2);
    printf("Nome do estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Area: %.2f\n", area2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f\n", densidadep2);
    printf("PIB per capita: %.2f\n", pibper2);

    return 0;
}
