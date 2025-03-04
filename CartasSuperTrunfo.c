#include <stdio.h>

int main() {
    char estado1,estado2;
    char cod_carta1[5],cod_carta2[5]; // Arrays para armazenar os códigos das cartas
    char cidade1[50], cidade2[50]; // Arrays para armazenar os nomes das cidades
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2; 

    // Coletando dados da Carta A
    printf("Carta A \n"); // Especificando qual a carta
    printf("Digite uma letra que irá representar o Estado (Entre 'A' a 'H'): \n"); 
    scanf(" %c", &estado1); // Colocando um espaço antes de %c para limpar o buffer

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", cod_carta1); // Não é necessário usar & para arrays

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1); // Não é necessário usar & para arrays

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Coletando dados da Carta B
    printf("Carta B \n");
    printf("Digite uma letra que irá representar o Estado (Entre 'A' a 'H'): \n");
    scanf(" %c", &estado2); // Colocando um espaço antes de %c para limpar o buffer

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", cod_carta2); // Não é necessário usar & para arrays

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2); // Não é necessário usar & para arrays

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibindo os dados coletados
    printf("\n\nCarta A \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área(em km²): %.2fkm²\n", area1);// Exibe com 2 casas decimais
    printf("PIB: %.2f\n", pib1);// Exibe com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    // Exibindo os dados coletados
    printf("\n\nCarta B \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área(em km²): %.2fkm²\n", area2);// Exibe com 2 casas decimais
    printf("PIB: %.2f\n", pib2);// Exibe com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos2);


    return 0;
}
