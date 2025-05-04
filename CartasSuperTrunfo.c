#include <stdio.h>

int main(){

    int populacao1, pontos1, populacao2, pontos2;
    float pib1, area1, pib2, area2;

    printf("escreva o número da população da carta 1 \n:");
    scanf("%d", &populacao1);

    printf("escreva o número de pontos turisticos da carta 1 \n:");
    scanf("%d", &pontos1);

    printf("escreva o número do pib da carta 1 \n:");
    scanf("%f", &pib1);

    printf("escreva o número da area da carta 1 \n:");
    scanf("%f", &area1);

    printf("escreva o número da população da carta 2 \n:");
    scanf("%d", &populacao2);

    printf("escreva o número de pontos turisticos da carta 2 \n:");
    scanf("%d", &pontos2);

    printf("escreva o número do pib da carta 2 \n:");
    scanf("%f", &pib2);

    printf("escreva o número da area da carta 2 \n:");
    scanf("%f", &area2);


    printf("dados da carta 1: \n");
    printf("populacao: %d - pontos: %d\n", populacao1, pontos1);
    printf("pib: %f - area: %f\n", pib1, area1);

    printf("dados da carta 2: \n");
    printf("populacao: %d - pontos: %d\n", populacao2, pontos2);
    printf("pib1: %f - area: %f", pib2, area2);

    return 0;
}
