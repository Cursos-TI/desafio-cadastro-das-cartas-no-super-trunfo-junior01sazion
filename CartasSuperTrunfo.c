#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados da primeira carta
    char estado;
    char codigo[4];
    char nome_da_cidade[10];
    int populacao;
    float area;
    float pib;
    int numero_de_ponto_turistico;
    float densidade_populacional;
    float pib_per_capita; // Nova variável para o PIB per capita da primeira cidade

    // Declaração das variáveis para os dados da segunda carta
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_ponto_turistico2;
    float densidade_populacional2;
    float pib_per_capita2; // Nova variável para o PIB per capita da segunda cidade

    // Imprime um cabeçalho para a primeira carta
    printf("\nCarta 1 \n");

    // Solicita e lê os dados da primeira cidade
    printf("digite o codigo da cidade EX. 'A01': ");
    scanf(" %3s", codigo);

    printf("digite o nome da cidade EX. 'Natal': ");
    scanf(" %9s", nome_da_cidade);

    printf("digite o numero da população: ");
    scanf(" %d", &populacao);

    printf("digite o numero da Área: ");
    scanf(" %f", &area);

    printf("digite o PIB: ");
    scanf(" %f", &pib);

    printf("digite o numero de ponto turistico: ");
    scanf(" %d", &numero_de_ponto_turistico);

    // Calcula a densidade populacional da primeira cidade
    if (area > 0) {
        densidade_populacional = (float)populacao / area;
    } else {
        densidade_populacional = 0;
    }

    // Calcula o PIB per capita da primeira cidade
    if (populacao > 0) {
        pib_per_capita = pib / populacao;
    } else {
        pib_per_capita = 0; // Evita divisão por zero se a população for zero
    }

    // Imprime um cabeçalho para a segunda carta
    printf("\nCarta 2 \n");

    // Solicita e lê os dados da segunda cidade

    printf("digite o codigo da cidade EX. 'A01': ");
    scanf(" %3s", codigo2);

    printf("digite o nome da cidade EX. 'Natal': ");
    scanf(" %9s", nome_da_cidade2);

    printf("digite o numero da população: ");
    scanf(" %d", &populacao2);

    printf("digite o numero da Área: ");
    scanf(" %f", &area2);

    printf("digite o PIB: ");
    scanf(" %f", &pib2);

    printf("digite o numero de ponto turistico: ");
    scanf(" %d", &numero_de_ponto_turistico2);

    // Calcula a densidade populacional da segunda cidade
    if (area2 > 0) {
        densidade_populacional2 = (float)populacao2 / area2;
    } else {
        densidade_populacional2 = 0;
    }

    // Calcula o PIB per capita da segunda cidade
    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / populacao2;
    } else {
        pib_per_capita2 = 0; // Evita divisão por zero se a população for zero
    }

    // Imprime os dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita); // Imprime o PIB per capita

    // Imprime os dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2); // Imprime o PIB per capita

    return 0;
}