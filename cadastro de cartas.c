#include <stdio.h>

int main() {
    // Dados das cartas para dois locais
    int populacao[2], turisticos[2];
    float area[2], pib[2];
    char pais[2][30], estado[2][30], cidade[2][30];
    char identificadores[2][4] = {"A01", "B02"};

    for (int i = 0; i < 2; i++) {
        printf("\nCadastro da carta %s:\n", identificadores[i]);
        
        printf("Digite o nome do pais: ");
        scanf("%s", pais[i]);
        
        printf("Digite o nome do estado: ");
        scanf("%s", estado[i]);
        
        printf("Digite o nome da cidade: ");
        scanf("%s", cidade[i]);
        
        printf("Digite a area do pais (em km): ");
        scanf("%f", &area[i]);
        
        printf("Digite a populacao: ");
        scanf("%d", &populacao[i]);
        
        printf("Digite o PIB (em trilhoes): ");
        scanf("%f", &pib[i]);
        
        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &turisticos[i]);
    }

    // Exibição dos dados
    for (int i = 0; i < 2; i++) {
        printf("\nDados da carta %s:\n", identificadores[i]);
        printf("Pais: %s\n", pais[i]);
        printf("Estado: %s\n", estado[i]);
        printf("Cidade: %s\n", cidade[i]);
        printf("Area: %.2f km\n", area[i]);
        printf("Populacao: %d habitantes\n", populacao[i]);
        printf("PIB: %.2f trilhões\n", pib[i]);
        printf("Pontos turisticos: %d\n", turisticos[i]);
    }
    
    return 0;
}
