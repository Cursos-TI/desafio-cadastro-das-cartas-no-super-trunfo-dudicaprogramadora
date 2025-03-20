

#include <stdio.h>

int main() {

    printf("Seja bem-vindo ao Desafio Super Trunfo - Países\n");

   //primeira carta
    char estado1;            
    char cidade1[100];       
    int populacao1;          
    float area1;            
    float pib1;            
    int turismo1;            
    char codigo_carta1[5];  

     //segunda carta  
    char estado2;            
    char cidade2[100];       
    int populacao2;          
    float area2;             
    float pib2;              
    int turismo2;            
    char codigo_carta2[5];  

    
    printf("\nInforme os dados da Primeira Carta:\n");

    printf("Informe o Estado (ex: A, B, C...): \n");
    scanf("%c", &estado1); 

    printf("Informe o Nome da Cidade: \n");
    scanf("%s\n", cidade1); 

    printf("Informe a População: \n");
    scanf("%d", &populacao1);

    printf("Informe a área (em km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &turismo1);

    
    printf(codigo_carta1, "%c01", estado1);  

   
    printf("\nInforme os dados da Segunda Carta:\n");

    printf("Informe o Estado (ex: A, B, C...): \n");
    scanf("%c", &estado2);  

    printf("Informe o Nome da Cidade: \n");
    scanf("%s\n", cidade2);  

    printf("Informe a População: \n");
    scanf("%d", &populacao2);

    printf("Informe a área (em km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    //  código da carta para a segunda carta
    sprintf(codigo_carta2, "%c02", estado2);  

    
    printf("\nDados cadastrados da Primeira Carta:\n");
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("\nDados cadastrados da Segunda Carta:\n");
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);

    return 0;
}

