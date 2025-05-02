#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Variáveis da Carta 1
    char estado1[4];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidadePopul1;
    float pibCap1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2[4];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidadePopul2;
    float pibCap2;
    float superPoder2;

    // Variáveis para escolher os atributos
    int atributo1, atributo2;
    
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n\n");
    printf("Estado (letra de A a H): ");
    scanf("%s", estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico1);

    densidadePopul1 = populacao1 / area1;
    pibCap1 = (pib1 * 1000000000 ) / populacao1;
    superPoder1 = (float)(populacao1 + area1 + pib1 + pibCap1 + turistico1 + (1 / densidadePopul1));

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n\n");
    printf("Estado (letra de A a H): ");
    scanf("%s", estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);

    densidadePopul2 = populacao2 / area2;
    pibCap2 = (pib2 * 1000000000 ) / populacao2;
    superPoder2 = (float)(populacao2 + area2 + pib2 + pibCap2 + turistico2 + (1 / densidadePopul2));

    // Menus para selecionar os atributos
    printf("\nEscolha os atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    // Escolher o primeiro atributo
    do {
        printf("\nEscolha o primeiro atributo (1-7): ");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 7);

    // Escolher o segundo atributo, que não pode ser o mesmo que o primeiro
    do {
        printf("\nEscolha o segundo atributo (1-7, diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1);

    // Comparação dos dois atributos escolhidos
    float valor1 = 0, valor2 = 0;

    switch (atributo1) {
        case 1: valor1 = populacao1; break;
        case 2: valor1 = area1; break;
        case 3: valor1 = pib1; break;
        case 4: valor1 = turistico1; break;
        case 5: valor1 = densidadePopul1; break;
        case 6: valor1 = pibCap1; break;
        case 7: valor1 = superPoder1; break;
    }

    switch (atributo2) {
        case 1: valor2 = populacao2; break;
        case 2: valor2 = area2; break;
        case 3: valor2 = pib2; break;
        case 4: valor2 = turistico2; break;
        case 5: valor2 = densidadePopul2; break;
        case 6: valor2 = pibCap2; break;
        case 7: valor2 = superPoder2; break;
    }

    // Comparação direta dos dois atributos
    printf("\nComparação dos atributos escolhidos:\n");

    // Exibe os atributos comparados
    printf("Atributo 1: %.2f (Carta 1) vs %.2f (Carta 2)\n", valor1, valor2);

    // Determina quem ganhou com base nos valores dos atributos
    if (valor1 > valor2) {
        printf("Carta 1 venceu com o atributo %d!\n", atributo1);
    } else if (valor1 < valor2) {
        printf("Carta 2 venceu com o atributo %d!\n", atributo2);
    } else {
        printf("Empate no atributo %d!\n", atributo1);
    }

    return 0;
}
