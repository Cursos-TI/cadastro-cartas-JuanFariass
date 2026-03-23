#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
int main() {
    //ÁREA DE DECLARAÇÃO DE VARIÁVEIS
    //CARTA 1
    char  letra[10],codigo[10],cidade[50];
    int   pop,p_turisticos = 0;
    float pib,area = 0.0;
    //CARTA 2
    char  letra2[10],codigo2[10],cidade2[50];
    int   pop2,p_turisticos2 = 0;
    float pib2,area2 = 0.0;

    //ÁREA DE ENTRADA DE DADOS
    //CARTA 1

    printf("Bem-vindo ao super trunfo!!!\n\n");
    printf("--------------------------------------\n");
    printf("Adicione as informações da carta 1!\n");
    printf("--------------------------------------\n\n");
    printf("Digite a letra do estado: ");
    scanf ("%s",letra);
    printf("Digite o código do estado.Ex:(00): ");
    scanf ("%s",codigo);
    printf("Digite o nome da cidade.Ex:(RiodeJaneiro): ");
    scanf ("%s",cidade);
    printf("Digite a população.Ex:(123321): ");
    scanf ("%d",&pop);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf ("%d",&p_turisticos);
    printf("Digite a área.Ex:(00.00): ");
    scanf ("%f",&area);
    printf("Por último digite o PIB.Ex:(00.00): ");
    scanf ("%f",&pib);

    //CARTA 2

    printf("\n--------------------------------------\n");
    printf("Agora as informações da carta 2!\n");
    printf("--------------------------------------\n\n");
    printf("Digite a letra do estado: ");
    scanf("%s",letra2);
    printf("Digite o código do estado.Ex:(00): ");
    scanf("%s",codigo2);
    printf("Digite o nome da cidade.Ex:(RiodJaneiro): ");
    scanf("%s",cidade2);
    printf("Digite a população.Ex:(123321): ");
    scanf ("%d",&pop2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf ("%d",&p_turisticos2);
    printf("Digite a área.Ex:(00.00): ");
    scanf ("%f",&area2);
    printf("Por último digite o PIB.Ex:(00.00): ");
    scanf ("%f",&pib2);

    //ÁREA DE EXIBIÇÃO DE DADOS
    //CARTA 1

    printf("\n\n----------------------------------\n");
    printf("            CARTA 01              ");
    printf("\n----------------------------------\n\n");
    printf("Estado: %s\n",letra);
    printf("Código: %s\n",codigo);
    printf("Nome da cidade: %s\n",cidade);
    printf("Área: %fKm²\n",area);
    printf("PIB: %f Bilhões de reais.\n",pib);
    printf("População: %d\n",pop);
    printf("Quantidade de pontos turísticos: %d\n",p_turisticos);

    //CARTA 2

    printf("\n\n----------------------------------\n");
    printf("            CARTA 02              ");
    printf("\n----------------------------------\n\n");
    printf("Estado: %s\n",letra2);
    printf("Código: %s\n",codigo2);
    printf("Nome da cidade: %s\n",cidade2);
    printf("Área: %fKm²\n",area2);
    printf("PIB: %f Bilhões de reais.\n",pib2);
    printf("População: %d\n",pop2);
    printf("Quantidade de pontos turísticos: %d\n",p_turisticos2);
    printf("\n----------------------------------\n");

}