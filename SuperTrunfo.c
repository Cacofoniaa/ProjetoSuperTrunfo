#include <stdio.h>
//cadastro de cartas para jogo de super trunfo
int main() {
    char estado;
    char cod_carta[3];
    char cidade[30];
    int populacao, ponto_turistico;
    float area, pib;
   
//obtençao de dados para as cartas    
    printf("Digite uma letra para o estado: \n");
    scanf("%c", &estado);

    printf("Digite um código para a carta, (letra mais um número): \n");
    scanf("%s", &cod_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &ponto_turistico);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Carta 1: \n Estado: %c \n Código: %s \n Cidade: %s \n População: %d \n Pontos turisticos: %d \n Área: %f \n PIB: %f \n", estado, cod_carta, cidade, populacao, ponto_turistico, area, pib);
    
}