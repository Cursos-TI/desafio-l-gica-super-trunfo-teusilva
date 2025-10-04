#include <stdio.h>

int main()
{
    char estado1, estado2;
    char codigoDaCarta1[3], codigoDaCarta2[3];
    char cidade1[20], cidade2[20];

    float area1, pib1;
    float area2, pib2;

    int populacao1, pontosTuristicos1;
    int populacao2, pontosTuristicos2;

    float pibPerCapita1, pibPerCapita2;
    float densidadePopulacional1, densidadePopulacional2;

    printf("Carta 1:\n");

    printf("Estado: "); 
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigoDaCarta1);

    printf("Nome da cidade: "); // Digitar a cidade tudo junto se tiver nome separado ex: RioDeJaneiro
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    pib1 = pib1 * 1000000000;

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populaçao: %f\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("Pib per Capta: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigoDaCarta2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    pib2 = pib2 * 1000000000;

    pibPerCapita2 = pib2 / populacao2;
    densidadePopulacional2 = populacao2 / area2;

    printf("\n");

    int atributo1, atributo2;
    int resultado1, resultado2;
    
    printf("País: Brasil");
    printf("Carta 1: %s VS Carta 2: %s\n", cidade1, cidade2);
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Primeiro Atributo: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Você escolheu População:!\n ");
        printf("Carta 1 = %d e Carta 2 = %d", populacao1, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        prinf("Você escolheu área!\n");
        printf("Carta 1 = %.2f e Carta 2 = %.2f", area1, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu PIB!\n");
        printf("Carta 1 = %.2f e Carta 2 = %.2f", pib1, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu Pontos Turisticos!\n");
        printf("Carta 1 = %d e Carta 2 = %d", pontosTuristicos1, pontosTuristicos2);
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu Densidade Populacional!\n");
        printf("Carta 1 = %.2f e Carta 2 = %.2f", densidadePopulacional1, densidadePopulacional2);
        resultado1 = densidadePopulacional1 > densidadePopulacional2 ? 1 : 0;
    default:
        printf("Opção inválida!");
        break;
    }
    printf("Escolha o segundo atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Segundo Atributo: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    }
    else
    {
        switch (atributo2)
        {
        case 1:
            printf("Você escolheu População:!\n ");
            printf("Carta 1 = %d e Carta 2 = %d", populacao1, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            prinf("Você escolheu área!\n");
            printf("Carta 1 = %.2f e Carta 2 = %.2f", area1, area2);
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            printf("Carta 1 = %.2f e Carta 2 = %.2f", pib1, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos Turisticos!\n");
            printf("Carta 1 = %d e Carta 2 = %d", pontosTuristicos1, pontosTuristicos2);
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n");
            printf("Carta 1 = %.2f e Carta 2 = %.2f", densidadePopulacional1, densidadePopulacional2);
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        default:
            printf("Opção inválida!");
            break;
        }
    }
    if (resultado1 == 1 && resultado2 == 1)
    {
        printf("A carta número 1 venceu!");
    }
    else if (resultado1 != resultado2)
    {
        printf("Empatou!");
    }
    else
    {
        printf("A carta número 2 venceu!");
    }
    return 0;
}
