#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    /*------------Variaveis carta 1------------*/
    char Estado1;
    char codigoDaCarta1[5], nomeDaCidade1[20];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1,calculopib1;
    float calculoSuperPoder1;

    /*------------Variaveis carta 2------------*/
    char Estado2;
    char codigoDaCarta2[5], nomeDaCidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, calculopib2;
    float calculoSuperPoder2;

    /*------------Scan Carta 1------------*/
    printf("\n\n ---- Cadastro da carta 1 ---- \n");

    //Letra da carta 1
    printf("\n insira uma letra de A a H para representar o Estado: ");
    scanf(" %c", &Estado1);
    
    //Codigo da carta 1
    printf("\ninsira agora um codigo para letra de 01 a 04: ");
    scanf("%s",codigoDaCarta1);

    //Nome da cidade carta 1
    printf("\ninsira o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1);

    //População carta 1
    printf("\ninsira a quantidade da população: ");
    scanf("%d", &populacao1);

    //área carta 1
    printf("\ninsira a area da cidade: ");
    scanf("%f", &area1);

    //Pib carta 1
    printf("\ninsira o pib da cidade: ");
    scanf("%f", &pib1);

    //Ponto turístico carta 1
    printf("\ninsira o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /*------------Scan Carta 2------------*/
    printf("\n\n ---- Cadastro da carta 2 ---- \n");

    //Letra da carta 2
    printf("\ninsira uma letra de A a H para representar o Estado: ");
    scanf(" %c", &Estado2);
    
    //Codigo da carta 2
    printf("\ninsira agora um codigo para letra de 01 a 04: ");
    scanf("%s",codigoDaCarta2);

    //Nome da cidade carta 2
    printf("\ninsira o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    //População carta 2
    printf("\ninsira a quantidade da população: ");
    scanf("%d", &populacao2);

    //área carta 2
    printf("\ninsira a area da cidade: ");
    scanf("%f", &area2);

    //Pib carta 2
    printf("\ninsira o pib da cidade: ");
    scanf("%f", &pib2);

    //Ponto turístico carta 2
    printf("\ninsira o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /*----Densidade populacional----*/

    //carta 1
    densidadePopulacional1 = populacao1 / area1;
    //carta 2
    densidadePopulacional2 = populacao2 / area2;

    /*----PIB per Capita----*/

    // carta 1
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    // carta 2
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    /*----if's e else's----*/

    //comparação da carta vencedora utilizando a Densidade Populacional
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("\nCarta 1 - %s : %.2f\n", nomeDaCidade1, densidadePopulacional1);
        printf("Carta 2 - %s : %.2f\n\n", nomeDaCidade2, densidadePopulacional2);
        printf("Carta 1 -( %s ) venceu!\n\n", nomeDaCidade1); 
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        printf("\nCarta 1 - %s : %.2f\n", nomeDaCidade1, densidadePopulacional1);
        printf("Carta 2 - %s : %.2f\n\n", nomeDaCidade2, densidadePopulacional2);
        printf("Carta 2 -( %s ) venceu!\n\n", nomeDaCidade2);
    } else {
        printf("\nCarta 1 - %s : %.2f\n", nomeDaCidade1, densidadePopulacional1);
        printf("Carta 2 - %s : %.2f\n\n", nomeDaCidade2, densidadePopulacional2);
        printf("Empate!\n\n");
    }

    return 0;
}
