#include <stdio.h>

int main() {
     // Declaração de variáveis
    char estado1,estado2; // Variáveis para armazenar o estado representado por uma letra
    char cod_carta1[5],cod_carta2[5]; // Arrays para armazenar os códigos das cartas (estado + número)
    char cidade1[50], cidade2[50]; // Arrays para armazenar os nomes das cidades (máximo de 50 caracteres)
    int populacao1, populacao2; // Variáveis para armazenar as populações das cidades
    float area1, area2; // Variáveis para armazenar a área das cidades em km²
    float pib1, pib2; // Variáveis para armazenar o PIB das cidades
    int pontos_turisticos1, pontos_turisticos2; // Variáveis para armazenar o número de pontos turísticos das cidades

    // Introdução do jogo Super Trunfo
    printf("Bem-vindo ao jogo Super Trunfo!\n\n");
    printf("Neste jogo, você irá competir com cartas que representam diferentes cidades.\n");
    printf("Cada carta contém informações sobre a cidade, como população, área, PIB, e pontos turísticos.\n");
    printf("O objetivo é escolher as cartas que se destacam em cada categoria e vencer seu oponente!\n");
    printf("Você poderá comparar suas cartas com as do adversário e descobrir qual cidade tem a melhor classificação em cada característica.\n");
    printf("Será que a sua cidade vai ser a campeã no Super Trunfo? Vamos descobrir!\n\n");

    // Coletando dados da Carta A
    printf("Carta A \n"); // Exibe o título "Carta A"
    printf("Digite uma letra que irá representar o Estado (Entre 'A' e 'H'): \n"); 
    scanf(" %c", &estado1); // Solicita a letra representando o estado e armazena em estado1. O espaço antes de %c é para limpar o buffer

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", cod_carta1); // Solicita o código da carta e armazena em cod_carta1 (não é necessário usar & para arrays)

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1); // Solicita o nome da cidade e armazena em cidade1 (não é necessário usar & para arrays)

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao1); // Solicita o número de habitantes da cidade e armazena em populacao1

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1); // Solicita a área da cidade em km² e armazena em area1

    printf("Digite o PIB: \n");
    scanf("%f", &pib1); // Solicita o PIB da cidade e armazena em pib1

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1); // Solicita o número de pontos turísticos da cidade e armazena em pontos_turisticos1

    // Coletando dados da Carta B
    printf("Carta B \n"); // Exibe o título "Carta B"
    printf("Digite uma letra que irá representar o Estado (Entre 'A' e 'H'): \n");
    scanf(" %c", &estado2); // Solicita a letra representando o estado para a Carta B e armazena em estado2

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", cod_carta2); // Solicita o código da carta para a Carta B e armazena em cod_carta2

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2); // Solicita o nome da cidade para a Carta B e armazena em cidade2

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2); // Solicita o número de habitantes da cidade para a Carta B e armazena em populacao2

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2); // Solicita a área da cidade para a Carta B em km² e armazena em area2

    printf("Digite o PIB: \n");
    scanf("%f", &pib2); // Solicita o PIB da cidade para a Carta B e armazena em pib2

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2); // Solicita o número de pontos turísticos da cidade para a Carta B e armazena em pontos_turisticos2

    // Exibindo os dados coletados para a Carta A
    printf("\n\nCarta A \n"); // Exibe o título "Carta A"
    printf("Estado: %c\n", estado1); // Exibe o estado representado por uma letra
    printf("Código da Carta: %s\n", cod_carta1); // Exibe o código da Carta A
    printf("Nome da Cidade: %s\n", cidade1); // Exibe o nome da cidade da Carta A
    printf("População: %d\n", populacao1); // Exibe a população da cidade da Carta A
    printf("Área(em km²): %.2fkm²\n", area1); // Exibe a área da cidade da Carta A com 2 casas decimais
    printf("PIB: %.2f\n", pib1); // Exibe o PIB da cidade da Carta A com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); // Exibe o número de pontos turísticos da cidade da Carta A
    
    // Exibindo os dados coletados para a Carta B
    printf("\n\nCarta B \n"); // Exibe o título "Carta B"
    printf("Estado: %c\n", estado2); // Exibe o estado representado por uma letra para a Carta B
    printf("Código da Carta: %s\n", cod_carta2); // Exibe o código da Carta B
    printf("Nome da Cidade: %s\n", cidade2); // Exibe o nome da cidade para a Carta B
    printf("População: %d\n", populacao2); // Exibe a população da cidade para a Carta B
    printf("Área(em km²): %.2fkm²\n", area2); // Exibe a área da cidade para a Carta B com 2 casas decimais
    printf("PIB: %.2f\n", pib2); // Exibe o PIB da cidade para a Carta B com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos2); // Exibe o número de pontos turísticos da cidade para a Carta B

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
