#include <stdio.h>

//Dados da Carta 1
    char estado1[1];
    char city1[1];
    char cdg1[3];
    int pop1;
    float pib1;
    int pts1;
    float area;

    //Dados da Carta 2
    char estado2[1];
    char cdg2[3];
    char city2[1];
    int pop2;
    float pib2;
    int pts2;
    float area2;

int main(){

    //Obtenção dos Dados da Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", estado1);

    printf("Digite a Cidade da Carta 1: \n");
    scanf("%s", city1);

    printf("Digite o Codigo da Carta 1: \n");
    scanf("%s", cdg1);

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite a quantidade de pontos turisticos da Carta 1: \n");
    scanf("%d", &pts1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a area da Carta 1: \n");
    scanf("%f", &area);

    //Obtenção dos Dados da Carta 2

    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Digite a Cidade da Carta 2: \n");
    scanf("%s", city2);

    printf("Digite o Codigo da Carta 2: \n");
    scanf("%s", cdg2);

    printf("Digite a população da Carta 2: \n");
    scanf("%d", &pop2);

    printf("Digite a quantidade de pontos turisticos da Carta 2: \n");
    scanf("%d", &pts2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a area da Carta 2: \n");
    scanf("%f", &area2);



    //Exibição dos Dados da carta 1
    printf("\nCarta 1: \n");
    printf("\nEstado: %s\n", estado1);
    printf("\nNome da Cidade: %s\n", city1);
    printf("\nCodigo: %s\n", cdg1);
    printf("\nPopulação: %d\n", pop1);
    printf("\nArea(km²): %f\n", area);
    printf("\nPIB: %f\n", pib1);
    printf("\nNumero de Pontos turisticos: %d\n", pts1);

    //Exibição dos Dados da Carta 2
    printf("\nCarta 2: \n");
    printf("\nEstado: %s\n", estado2);
    printf("\nCidade: %s\n", city2);
    printf("\nCodigo: %s\n", cdg2);
    printf("\nPopulação: %d\n", pop2);
    printf("\nArea(km²): %f\n", area2);
    printf("\nPIB: %f\n", pib2);
    printf("\nNumero de Pontos turisticos: %d\n", pts2);
   
}


    


