#include <stdio.h>

int main()
{
    char codigo1[4], cidade1[15], estado1[2], codigo2[4], cidade2[15], estado2[2];
    float area1, PIB1, area2, PIB2;
    int populacao1, atracoes1, populacao2, atracoes2;
    printf("CADASTRO DA CARTA 1\n");
    printf("Digite o código da Carta 1\n");
    scanf("%s", codigo1);
    printf("Digite a letra referente ao estado\n");
    scanf("%s", estado1);
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade1);
    printf("Informe a área da cidade em quilômetros quadrados\n");
    scanf("%f", &area1);
    printf("Informe o número de habitantes\n");
    scanf("%d", &populacao1);
    printf("Informe o PIB\n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &atracoes1);
    printf("CADASTRO DA CARTA 2\n");
    printf("Digite o código da Carta 2\n");
    scanf("%s", codigo2);
    printf("Digite a letra referente ao estado\n");
    scanf("%s", estado2);
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade2);
    printf("Informe a área da cidade em quilômetros quadrados\n");
    scanf("%f", &area2);
    printf("Informe o número de habitantes\n");
    scanf("%d", &populacao2);
    printf("Informe o PIB\n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &atracoes2);
    printf("\nDADOS DA CARTA 1\n");
    printf(" Código: %s\n", codigo1);
    printf(" Estado: %s\n", estado1);
    printf(" Cidade: %s\n", cidade1);
    printf(" Área: %f km2\n", area1);
    printf(" População: %d habitantes\n", populacao1);
    printf(" PIB: R$ %f\n", PIB1);
    printf(" Número de pontos turísticos: %d\n", atracoes1);
    printf("\nDADOS DA CARTA 2\n");
    printf(" Código: %s\n", codigo2);
    printf(" Estado: %s\n", estado2);
    printf(" Cidade: %s\n", cidade2);
    printf(" Área: %f km2\n", area2);
    printf(" População: %d habitantes\n", populacao2);
    printf(" PIB: R$ %f\n", PIB2);
    printf(" Número de pontos turísticos: %d\n", atracoes2);

    return 0;
}