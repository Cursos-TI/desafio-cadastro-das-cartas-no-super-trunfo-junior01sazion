#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados da primeira carta
    char estado;
    char codigo[4];
    char nome_da_cidade[10];
    unsigned long populacao;
    float area;
    float pib;
    int numero_de_ponto_turistico;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

    // Declaração das variáveis para os dados da segunda carta
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[10];
    unsigned long populacao2;
    float area2;
    float pib2;
    int numero_de_ponto_turistico2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Imprime um cabeçalho para a primeira carta
    printf("\nCarta 1 \n");

    // Solicita e lê os dados da primeira cidade
    printf("digite o codigo da cidade EX. 'A01': ");
    scanf(" %3s", codigo);

    printf("digite o nome da cidade EX. 'Natal': ");
    scanf(" %9s", nome_da_cidade);

    printf("digite o numero da população: ");
    scanf(" %lu", &populacao);

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
        pib_per_capita = 0;
    }

    // Calcula o Super Poder da primeira carta
    float inverso_densidade = (densidade_populacional > 0) ? (1.0f / densidade_populacional) : 0.0f;
    super_poder = (float)populacao + area + pib + numero_de_ponto_turistico + pib_per_capita + inverso_densidade;

    // Imprime um cabeçalho para a segunda carta
    printf("\nCarta 2 \n");

    // Solicita e lê os dados da segunda cidade

    printf("digite o codigo da cidade EX. 'A01': ");
    scanf(" %3s", codigo2);

    printf("digite o nome da cidade EX. 'Natal': ");
    scanf(" %9s", nome_da_cidade2);

    printf("digite o numero da população: ");
    scanf(" %lu", &populacao2);

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
        pib_per_capita2 = 0;
    }

    // Calcula o Super Poder da segunda carta
    float inverso_densidade2 = (densidade_populacional2 > 0) ? (1.0f / densidade_populacional2) : 0.0f;
    super_poder2 = (float)populacao2 + area2 + pib2 + numero_de_ponto_turistico2 + pib_per_capita2 + inverso_densidade2;

    // --- Comparação das Cartas ---
    printf("\n--- Resultados da Comparação ---\n");

    // População
    printf("População - Carta 1 vence: %d\n", populacao > populacao2);

    // Área
    printf("Área - Carta 1 vence: %d\n", area > area2);

    // PIB
    printf("PIB - Carta 1 vence: %d\n", pib > pib2);

    // Pontos Turísticos
    printf("Pontos Turísticos - Carta 1 vence: %d\n", numero_de_ponto_turistico > numero_de_ponto_turistico2);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional - Carta 1 vence: %d\n", densidade_populacional < densidade_populacional2);

    // PIB per Capita
    printf("PIB per Capita - Carta 1 vence: %d\n", pib_per_capita > pib_per_capita2);

    // Super Poder
    printf("Super Poder - Carta 1 vence: %d\n", super_poder > super_poder2);

    // --- Determinar e Imprimir a Carta Vencedora ---
    printf("\n--- Carta Vencedora ---\n");
    if (super_poder > super_poder2) {
        printf("A Carta 1 venceu com um Super Poder de %.2f!\n", super_poder);
        printf("\n--- Dados da Carta 1 ---\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
        printf("PIB per Capita: %.2f\n", pib_per_capita);
        printf("Super Poder: %.2f\n", super_poder);
    } else if (super_poder2 > super_poder) {
        printf("A Carta 2 venceu com um Super Poder de %.2f!\n", super_poder2);
        printf("\n--- Dados da Carta 2 ---\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nome_da_cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico2);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f\n", pib_per_capita2);
        printf("Super Poder: %.2f\n", super_poder2);
    } else {
        printf("As cartas empataram em Super Poder!\n");
        printf("\n--- Dados da Carta 1 ---\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
        printf("PIB per Capita: %.2f\n", pib_per_capita);
        printf("Super Poder: %.2f\n", super_poder);
        printf("\n--- Dados da Carta 2 ---\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nome_da_cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico2);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f\n", pib_per_capita2);
        printf("Super Poder: %.2f\n", super_poder2);
    }

    return 0;
}