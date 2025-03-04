#include <stdio.h>

int main() {
    // Dados das cartas
    int populacao;
    float area;
    float pib;
    int turisticos;
    char pais[30], cidade[30];

    // Entrada de dados
    printf("Digite o nome do pais:\n");
    scanf("%s", pais);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite a area do pais:\n");
    scanf("%f", &area);

    printf("Digite a populaçao:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &turisticos);

    // Exibição dos dados
    printf("\n=== Dados do Pais ===\n");
    printf("País: %s\n", pais);
    printf("Cidade: %s\n", cidade);
    printf("Área: %f km²\n", area);
    printf("População: %d habitantes\n", populacao);
    printf("PIB: %f trilhões\n", pib);
    printf("Pontos turisticos: %d\n", turisticos);

    return 0;
}
