#include <stdio.h>

int main(){

    //Carta 1 e 2

    char estado[5], estado2[5];

    char codigo[50], codigo2[50];

    char nodcidade[50], nodcidade2[50];

    int populacao, populacao2;

    float area, area2;

    float pib, pib2; 

    int nudpontos, nudpontos2;

    //Formatação da primeira carta 

    printf("Preencha os dados da primeira carta: \n");

    printf("Uma letra de 'A' a 'H': \n");
    scanf("%s", &estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nodcidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &nudpontos);

    printf(" \n"); //Só pra pular linha 

    printf("Preencha os dados da segunda carta: \n");

    printf("Uma letra de 'A' a 'H': \n");
    scanf("%s", &estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nodcidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &nudpontos2);

    printf(" \n"); //Só pra pular linha 

    //Recepção dos dados das cartas
    
    printf("Carta 1: \n");

    printf("Estado: %s \n", estado);

    printf("Código: %s \n", codigo);

    printf("Nome da cidade: %s \n", nodcidade);

    printf("População: %d \n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.0f \n", pib);

    printf("Número de Pontos turísticos: %d \n", nudpontos) ;

    printf(" \n"); //Só pra pular linha 

    printf("Carta 2: \n");

    printf("Estado: %s \n", estado2);

    printf("Código: %s \n", codigo2);

    printf("Nome da cidade: %s \n", nodcidade2);

    printf("População: %d \n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.0f \n", pib2);

    printf("Número de pontos turísticos: %d \n", nudpontos2) ;

    return 0;

}