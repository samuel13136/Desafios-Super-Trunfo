#include <stdio.h>
int main() {


    // Dados da carta 1
    char estado1[50], codigo1[3], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidadepopulacional1, pibpercapita1, superpoder1;

    printf("** Digite os dados da carta 1 **\n");
    printf("Digite a letra do Estado (A a H):\n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (01 a 04):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em Km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: (em bilhoes de reais)\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);
puts("");
printf("________________________________________________\n");
puts("\n");

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1 / densidadepopulacional1) + pibpercapita1;




    // Dados da carta 2
    char estado2[50], codigo2[3], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidadepopulacional2, pibpercapita2, superpoder2;

    printf("** Agora digite os dados da carta 2 **\n");
    printf("Digite a letra do Estado (A a H):\n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (01 a 04):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em Km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: (em bilhoes de reais)\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);
    puts("");

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2; // PIB em reais
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1 / densidadepopulacional2) + pibpercapita2;



    // Comparações de atributos e exibição de resultados
    printf("\n*** Comparação de Cartas: ***\n");

    // População
    printf("População: ");
    if (populacao1 > populacao2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Área
    printf("Área: ");
    if (area1 > area2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // PIB
    printf("PIB: ");
    if (pib1 > pib2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Densidade Populacional
    printf("Densidade Populacional: ");
    if (densidadepopulacional1 < densidadepopulacional2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // PIB per Capita
    printf("PIB per Capita: ");
    if (pibpercapita1 > pibpercapita2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    // Super Poder
    printf("Super Poder: ");
    if (superpoder1 > superpoder2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");


    return 0;
}