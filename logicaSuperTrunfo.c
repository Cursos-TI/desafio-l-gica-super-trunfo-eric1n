#include <stdio.h>

int main(void){

    char nomepais1[20] = "Brasil", nomepais2[20] = "Argentina";
    int opcao1, opcao2;
    float populacao1, populacao2, area1, area2, densidade1, densidade2;
    double C1atributo1, C1atributo2, C2atributo1, C2atributo2, pib1, pib2, superp1, superp2;

    populacao1 = 45000000;
    populacao2 = 66000000;
    area1 = 8510000;
    area2 = 8510000;
    pib1 = 217400000;
    pib2 = 6461004000;
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    superp1 = (populacao1 + area1 + pib1 ) / densidade1;
    superp2 = (populacao2 + area2 + pib2 ) / densidade2;

    printf("\n***Bem-vindo ao jogo do supertrunfo!***\n");
    printf("\nAtributos:");
    printf("\n1 - Populacao.");
    printf("\n2 - Area.");
    printf("\n3 - PIB.");
    printf("\n4 - Densidade.");
    printf("\n5 - Super poder.");
    printf("\nEscolha qual o primeiro atributo que voce quer comparar: ");
    scanf("%d", &opcao1);
    printf("\nEscolha qual o segundo atributo que voce quer comparar: ");
    scanf("%d", &opcao2);

    /*Condicao de erro*/
    if(opcao1 == opcao2 || opcao1 > 5 || opcao2 > 5){
        printf("\nOpcao invalida!\n");
    } else{
    /*Comparacao atributo 1*/
    switch(opcao1){
        case 1:
        C1atributo1 = populacao1;
        C2atributo1 = populacao2;
        printf("\n\nPrimeiro atributo - Populacao: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo1);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo1);
        break;

        case 2:
        C1atributo1 = area1;
        C2atributo1 = area2;
        printf("\n\nPrimeiro atributo - Area: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo1);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo1);
        break;

        case 3:
        C1atributo1 = pib1;
        C2atributo1 = pib2;
        printf("\n\nPrimeiro atributo - PIB: ");
        printf("\nCarta 1 (%s): %lf", nomepais1, C1atributo1);
        printf("\nCarta 2 (%s): %lf", nomepais2, C2atributo1);
        break;

        case 4:
        C1atributo1 = densidade1;
        C2atributo1 = densidade2;
        printf("\n\nPrimeiro atributo - Densidade: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo1);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo1);
        break;

        case 5:
        C1atributo1 = superp1;
        C2atributo1 = superp2;
        printf("\n\nPrimeiro atributo - Super poder: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo1);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo1);
        break;

        default:
        printf("\n###  Opcao invalida! ###\n");
        break;
    }

    /*Comparacao atributo 2*/
    switch(opcao2){
        case 1:
        C1atributo2 = populacao1;
        C2atributo2 = populacao2;
        printf("\n\nSegundo atributo - Populacao: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo2);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo2);
        break;

        case 2:
        C1atributo2 = area1;
        C2atributo2 = area2;
        printf("\n\nSegundo atributo - Area: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo2);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo2);
        break;

        case 3:
        C1atributo2 = pib1;
        C2atributo2 = pib2;
        printf("\n\nSegundo atributo - PIB: ");
        printf("\nCarta 1 (%s): %lf", nomepais1, C1atributo2);
        printf("\nCarta 2 (%s): %lf", nomepais2, C2atributo2);
        break;

        case 4:
        C1atributo2 = densidade1;
        C2atributo2 = densidade2;
        printf("\n\nSegundo atributo - Densidade: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo2);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo2);
        break;

        case 5:
        C1atributo2 = superp1;
        C2atributo2 = superp2;
        printf("\n\nSegundo atributo - Super poder: ");
        printf("\nCarta 1 (%s): %f", nomepais1, C1atributo2);
        printf("\nCarta 2 (%s): %f", nomepais2, C2atributo2);
        break;

        default:
        printf("\n###  Opcao invalida! ###\n");
        break;
    }

    /*Resultado*/
    printf("\n\nSoma dos atributos");
    printf("\nCarta 1: %f", C1atributo1 + C1atributo2);
    printf("\nCarta 2: %f", C2atributo1 + C2atributo2);

    if((C1atributo1 + C1atributo2) == (C2atributo1 + C2atributo2)){
        printf("\n\nO jogo terminou em empate\n");
    } else if ((C1atributo1 + C1atributo2) > (C2atributo1 + C2atributo2)){
        printf("\n\nCarta 1 ganhou a rodada!\n");
    } else {
        printf("\n\nCarta 2 ganhou a rodada!\n");
    }
    }
    return 0;
}