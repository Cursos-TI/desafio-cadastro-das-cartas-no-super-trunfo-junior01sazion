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

    // Declaração das variáveis para os dados da segunda carta
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_ponto_turistico2;

    // Imprime um cabeçalho para a primeira carta
    printf("\nCarta 1 \n");

    // Solicita e lê os dados da segunda cidade
    printf("digite o codigo da cidade EX. 'A01': ");
    scanf(" %3s", codigo); // Lê uma string de no máximo 3 caracteres para o código

    printf("digite o nome da cidade EX. 'Natal': ");
    scanf(" %9s", nome_da_cidade); // Lê uma string de no máximo 9 caracteres para o nome da cidade

    printf("digite o numero da população: ");
    scanf(" %d", &populacao); // Lê um número inteiro para a população

    printf("digite o numero da Área: ");
    scanf(" %f", &area); // Lê um número de ponto flutuante para a área

    printf("digite o PIB: ");
    scanf(" %f", &pib); // Lê um número de ponto flutuante para o PIB

    printf("digite o numero de ponto turistico: ");
    scanf(" %d", &numero_de_ponto_turistico); // Lê um número inteiro para o número de pontos turísticos

    // Imprime um cabeçalho para a segunda carta
    printf("\nCarta 2 \n");

    // Solicita e lê os dados da segunda cidade

    printf("digite o codigo da cidade EX. 'A01': ");
    scanf(" %3s", codigo2); // Lê uma string de no máximo 3 caracteres para o código da segunda cidade

    printf("digite o nome da cidade EX. 'Natal': ");
    scanf(" %9s", nome_da_cidade2); // Lê uma string de no máximo 9 caracteres para o nome da segunda cidade

    printf("digite o numero da população: ");
    scanf(" %d", &populacao2); // Lê um número inteiro para a população da segunda cidade

    printf("digite o numero da Área: ");
    scanf(" %f", &area2); // Lê um número de ponto flutuante para a área da segunda cidade

    printf("digite o PIB: ");
    scanf(" %f", &pib2); // Lê um número de ponto flutuante para o PIB da segunda cidade

    printf("digite o numero de ponto turistico: ");
    scanf(" %d", &numero_de_ponto_turistico2); // Lê um número inteiro para o número de pontos turísticos da segunda cidade

    // Imprime os dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area); // Usando %.2f para exibir 2 casas decimais
    printf("PIB: %.2f\n", pib);   // Usando %.2f para exibir 2 casas decimais
    printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico);

    // Imprime os dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2); // Usando %.2f para exibir 2 casas decimais
    printf("PIB: %.2f\n", pib2);   // Usando %.2f para exibir 2 casas decimais
    printf("Pontos Turísticos: %d\n", numero_de_ponto_turistico2);

    return 0; // Indica que o programa terminou com sucesso
}