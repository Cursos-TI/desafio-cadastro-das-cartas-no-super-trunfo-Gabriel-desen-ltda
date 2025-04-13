#include <stdio.h>

int main() {
    int turisticos1, turisticos2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    char pais1[30], estado1[30], cidade1[30], codigo1[5];
    char pais2[30], estado2[30], cidade2[30], codigo2[5];

    // Entrada de dados para a primeira carta
    printf("codigo da primeira carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome do pais : ");
    scanf("%s", pais1);

    printf("Digite o nome do estado : ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade : ");
    scanf("%s", cidade1);

    printf("Digite a populacao : ");
    scanf("%d", &populacao1);

    printf("Digite o PIB : ");
    scanf("%f", &pib1);

    printf("Digite a area : ");
    scanf("%f", &area1);

    printf("Digite o numero de pontos turisticos : ");
    scanf("%d", &turisticos1);

    // Entrada de dados para a segunda carta
    printf("\ncodigo da segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome do pais : ");
    scanf("%s", pais2);

    printf("Digite o nome do estado : ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade : ");
    scanf("%s", cidade2);

    printf("Digite a populacao : ");
    scanf("%d", &populacao2);

    printf("Digite o PIB : ");
    scanf("%f", &pib2);

    printf("Digite a area : ");
    scanf("%f", &area2);

    printf("Digite o numero de pontos turisticos : ");
    scanf("%d", &turisticos2);

    // Exibição de dados da primeira carta
    printf("\n--- Primeira Carta ---\n");
    printf("codigo da carta: %s\nnome do pais: %s\nnome do estado: %s\n:nome da cidade %s\n", codigo1, pais1, estado1, cidade1);
    printf("numero da populacao: %d\nnumero do PIB: %f\nnumero da area: %f\nnumero de pontos turisticos: %d\n", populacao1, pib1, area1, turisticos1);

    // Exibição de dados da segunda carta
    printf("\n--- Segunda Carta ---\n");
    printf("codigo da carta: %s\nnome do pais: %s\nnome do estado: %s\n:nome da cidade %s\n", codigo2, pais2, estado2, cidade2);
    printf("numero da populacao: %d\nnumero do PIB: %f\nnumero da area: %f\nnumero de pontos turisticos: %d\n", populacao2, pib2, area2, turisticos2);

    return 0;
}
