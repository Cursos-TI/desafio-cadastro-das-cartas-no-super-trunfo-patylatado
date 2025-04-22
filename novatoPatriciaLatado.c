#include <stdio.h>

int main()
{
    char codigo1[4], cidade1[15], estado1[2], codigo2[4], cidade2[15], estado2[2];
    float area1, PIB1, area2, PIB2, DensPop1, DensPop2, PIBpc1, PIBpc2;
    int populacao1, atracoes1, populacao2, atracoes2;
    float SPoder1, SPoder2, Apc1, Apc2;
    printf("CADASTRO DA CARTA 1\n");  //Entrada de dados para a carta 1
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
    printf("CADASTRO DA CARTA 2\n"); //entrada de dados para a carta 2
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
    DensPop1 = (float)populacao1/area1; //calcula a densidade populacional da cidade 1
    DensPop2 = (float) populacao2/area2; //calcula a densidade populacional da cidade 2
    PIBpc1 = (float) PIB1/populacao1; //calcula o PIB per capta da cidade 1
    PIBpc2 = (float) PIB2/populacao2; //calcula o PIB per capta da cidade 2
    SPoder1 = Apc1+PIBpc1+area1+atracoes1+populacao1+PIB1; // calcula o super poder 
    SPoder2 = Apc2+PIBpc2+area2+atracoes2+populacao2+PIB2; // calcula o super poder 
    printf("\nDADOS DA CARTA 1\n"); //exibe os dados da carta 1
    printf(" Código: %s\n", codigo1);
    printf(" Estado: %s\n", estado1);
    printf(" Cidade: %s\n", cidade1);
    printf(" Área: %.2f km2\n", area1); //exibe a área da cidade com 2 casas decimais
    printf(" População: %d habitantes\n", populacao1);
    printf(" PIB: R$ %.1f\n", PIB1); //exibe o PIB da cidade com 1 casa decimal
    printf(" Densidade Populacional: %.2f\n", DensPop1);
    printf(" PIB per capta: %.2f\n", PIBpc1);
    printf(" Número de pontos turísticos: %d\n", atracoes1);
    printf(" Super Poder: %.2f",SPoder1);
    printf("\nDADOS DA CARTA 2\n"); //exibe os dados da carta 2
    printf(" Código: %s\n", codigo2);
    printf(" Estado: %s\n", estado2);
    printf(" Cidade: %s\n", cidade2);
    printf(" Área: %.2f km2\n", area2);
    printf(" População: %d habitantes\n", populacao2);
    printf(" PIB: R$ %.1f\n", PIB2);
    printf(" Densidade Populacional: %.2f\n", DensPop2);
    printf(" PIB per capta: %.2f\n", PIBpc2);
    printf(" Número de pontos turísticos: %d\n", atracoes2);
    printf(" Super Poder: %.2f",SPoder2);
    printf("\n**COMPARAÇÃO ENTRE AS DUAS CARTAS\n"); //compara as duas cartas, em cada um dos atributos
    int CARTA1 = 0, CARTA2 = 0; //declara e atribui o valor 0 à somatória de pontos de cada carta. Cada atributo vencido recebe um ponto
    if(area1 > area2){
       printf("ÁREA: CARTA 1 VENCE\n");
       CARTA1 = 1;
       }else{printf("ÁREA: CARTA 2 VENCE\n");
        CARTA2 = 1;
       }
    if(populacao1 > populacao2){
       printf("POPULAÇÃO: CARTA 1 VENCE\n");
       CARTA1++;
       }else{printf("POPULAÇÃO: CARTA 2 VENCE\n");
        CARTA2++;
       }
    if(PIB1 > PIB2){
       printf("PIB: CARTA 1 VENCE\n");
       CARTA1++;
       }else{printf("PIB: CARTA 2 VENCE\n");
        CARTA2++;
       }
    if(DensPop1 < DensPop2){
       printf("DENSIDADE POPULACIONAL: CARTA 1 VENCE\n");
       CARTA1++;
       }else{printf("DENSIDADE POPULACIONAL: CARTA 2 VENCE\n");
        CARTA2++;
       }
    if(PIBpc1 > PIBpc2){
       printf("PIB per capta: CARTA 1 VENCE\n");
       CARTA1++;
       }else{printf("PIB per capta: CARTA 2 VENCE\n");
        CARTA2++;
       }
    if(atracoes1 > atracoes2){
       printf("NÚMERO DE PONTOS TURÍSTICOS: CARTA 1 VENCE\n");
       CARTA1++;
       }else{ printf("NÚMERO DE PONTOS TURÍSTICOS: CARTA 2 VENCE\n");
        CARTA2++;
       }
    if(SPoder1 > SPoder2){
       printf("SUPER PODER: CARTA 1 VENCE\n"); //a carta que vence o Super Poder ganha 2 pontos
       CARTA1 = CARTA1+2;
       }else{ printf("SUPER PODER: CARTA 2 VENCE\n");
        CARTA2 = CARTA2+2;
       }
    printf(" Carta 1 tem %d pontos\n Carta 2 tem %d pontos\n", CARTA1, CARTA2);
}
    
