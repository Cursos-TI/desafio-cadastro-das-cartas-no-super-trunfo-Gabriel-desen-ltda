#include <stdio.h>

int main() {

    //armazenamento de dados
    int turisticos1, turisticos2;
    double populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadep1, pibper1, densidadep2, pibper2, super_poder1, super_poder2;
  

    // Entrada de dados para a primeira carta

    printf("\n--carta: A01--\n");

    printf("Digite a populacao:\n");
    scanf(" %lf", &populacao1);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib1);

    printf("Digite a area:\n");
    scanf(" %f", &area1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf(" %d", &turisticos1);

    // Entrada de dados para a segunda carta
    printf("\n--Carta: B01--\n");

    printf("Digite a populacao:\n");
    scanf(" %lf", &populacao2);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib2);

    printf("Digite a area:\n");
    scanf(" %f", &area2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf(" %d", &turisticos2);

    // Calculando densidade populacional e PIB per capita
    densidadep1 = (populacao1 / area1);
    densidadep2 = (populacao2 / area2);
    pibper1 = (float)(pib1 / populacao1);
    pibper2 = (float)(pib2 / populacao2);


    // Exibição de dados da primeira carta
    printf("\n--- Carta 1 ---\n");
   
    printf("Populacao: %lf\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Area: %.2f\n", area1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f\n", densidadep1);
    printf("PIB per capita: %.2f\n", pibper1);
    printf("super poder:%.2f\n", super_poder1 = populacao1 + area1 + pibper1 + densidadep1);  //soma de dados armazenados


    // Exibição de dados da segunda carta
    printf("\n--- Carta 2 ---\n");
 
    printf("Populacao:%.lf\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Area: %.2f\n", area2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f\n", densidadep2);
    printf("PIB per capita: %.2f\n", pibper2);
    printf("super poder:%.2f\n", super_poder2 = populacao2 + area2 + pibper2 + densidadep2); ////soma de dados armazenados
   
 
   //comparação de cartas
      printf("\n----comparacao de cartas----\n");

    printf("populacao: %s\n", (populacao1 > populacao2) ? "carta 1 venceu" : "carta 2 venceu" );
    printf("Pib: %s\n", (pib1 > pib2) ? "carta 1 venceu" : "carta 2 venceu"); // ponto de interrogação e um operador para determinar se e verdadeiro ou falso
    printf("area: %s\n", (area1 > area2) ? "carta 1 venceu" : "carta 2 venceu");
    printf("numeros de pontos turisticos: %s\n", (turisticos1 > turisticos2) ? "carta 1 venceu" : "carta 2 venceu");
    printf(" densidade populacional: %s\n", (densidadep1 < densidadep2) ? "carta 1 venceu" : "carta 2 venceu");
    printf("pib per capita: %s\n", (pibper1 > pibper2) ? "carta 1 venceu" : "carta 2 venceu");
    printf("super poder: %s\n", (super_poder1 > super_poder2) ? "carta 1 venceu" : "carta 2 venceu");






       return 0;
}
