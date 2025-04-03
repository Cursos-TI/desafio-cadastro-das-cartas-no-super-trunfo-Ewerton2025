#include <stdio.h>

int main() {
    // Cadastro carta 1 Super Trunfo em C
    char Estado[30]; 
    char cidade[30];   
    float Area;
    char codigodacarta[5]; // Aumentado para evitar estouro de buffer
    unsigned long int populacao;
    float PIB;
    int numerodepontosturisticos;
    float densidade_populacional;
    float PIB_per_capita;
    float super_poder;

    printf("Qual Estado:\n");  
    scanf("%s", Estado); 

    printf("Nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite quantos metros quadrados de área:\n");
    scanf("%f", &Area);

    printf("Código da carta:\n");
    scanf("%s", codigodacarta);

    printf("Digite o número da população:\n");
    scanf("%lu", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos:\n");
    scanf("%d", &numerodepontosturisticos);

    densidade_populacional = populacao / Area;
    PIB_per_capita = PIB / populacao;
    super_poder = Area + PIB + populacao + numerodepontosturisticos + densidade_populacional + PIB_per_capita;

    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", cidade);
    printf("Área: %.2f\n", Area);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("População: %lu\n", populacao);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", PIB_per_capita);
    printf("Super Poder: %.2f\n", super_poder);


    // Cadastro carta 2 Super Trunfo em C
    char Estado2[30];
    char cidade2[30];   
    float Area2;
    char codigodacarta2[5];
    unsigned long int populacao2;
    float PIB2;
    int numerodepontosturisticos2;
    float densidade_populacional2;
    float PIB_per_capita2;
    float super_poder2;

    printf("\nQual Estado:\n");  
    scanf("%s", Estado2); 

    printf("Nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite quantos metros quadrados de área:\n");
    scanf("%f", &Area2);

    printf("Código da carta:\n");
    scanf("%s", codigodacarta2);

    printf("Digite o número da população:\n");
    scanf("%lu", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos:\n");
    scanf("%d", &numerodepontosturisticos2);

    densidade_populacional2 = populacao2 / Area2;
    PIB_per_capita2 = PIB2 / populacao2;
    super_poder2 = Area2 + PIB2 + populacao2 + numerodepontosturisticos2 + densidade_populacional2 + PIB_per_capita2;

    printf("\n=== Dados da Segunda Carta ===\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Área: %.2f\n", Area2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparando as cartas
    printf("\n=== Comparação entre as cartas ===\n");
    printf("A primeira carta tem uma população maior? %d (1 = Sim, 0 = Não)\n", populacao > populacao2);
    printf("A primeira carta possui uma área superior? %d (1 = Sim, 0 = Não)\n", Area > Area2);
    printf("A primeira carta tem um PIB maior? %d (1 = Sim, 0 = Não)\n", PIB > PIB2);
    printf("A primeira carta tem mais pontos turísticos? %d (1 = Sim, 0 = Não)\n", numerodepontosturisticos > numerodepontosturisticos2);
    printf("A primeira carta possui maior densidade populacional? %d (1 = Sim, 0 = Não)\n", densidade_populacional > densidade_populacional2);
    printf("A primeira carta possui um PIB per capita maior? %d (1 = Sim, 0 = Não)\n", PIB_per_capita > PIB_per_capita2);
    printf("A primeira carta possui um Super Poder maior? %d (1 = Sim, 0 = Não)\n", super_poder > super_poder2);

    return 0;
}