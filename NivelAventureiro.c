#include <stdio.h>

int main() {
// Declaração de variáveis.

int Carta1;
char Estado_Carta1[3];
char Codigo_Da_Carta1[4];
char Nome_da_Cidade_Carta1[40];
unsigned int Populacao_Carta1;
float Area_km2_Carta1;
int Pontos_turisticos_Carta1;
float PIB_Carta1;
float PIB_per_capita_Carta1 = PIB_Carta1 / Populacao_Carta1;
float Densidade_Populacional_Carta1 = Populacao_Carta1 / Area_km2_Carta1;

int Carta2;
char Estado_Carta2[3];
char Codigo_Da_Carta2[4];
char Nome_da_Cidade_Carta2[40];
unsigned int Populacao_Carta2;
float Area_km2_Carta2;
int Pontos_turisticos_Carta2;
float PIB_Carta2;
float PIB_per_capita_Carta2 = PIB_Carta2 / Populacao_Carta2;
float Densidade_Populacional_Carta2 = Populacao_Carta2 / Area_km2_Carta2;
    // --- Declaração de variáveis CARTA 1 ---
    char Nome_da_Cidade_Carta1[40];
    unsigned long int Populacao_Carta1;
    float Area_km2_Carta1;
    int Pontos_turisticos_Carta1;
    float PIB_Carta1;
    float PIB_per_capita_Carta1;
    float Densidade_Populacional_Carta1;
    float Inverso_Densidade_Populacional_Carta1;
    float SuperPoder_Carta1;

    // --- Declaração de variáveis CARTA 2 ---
    char Nome_da_Cidade_Carta2[40];
    unsigned long int Populacao_Carta2;
    float Area_km2_Carta2;
    int Pontos_turisticos_Carta2;
    float PIB_Carta2;
    float PIB_per_capita_Carta2;
    float Densidade_Populacional_Carta2;
    float Inverso_Densidade_Populacional_Carta2;
    float SuperPoder_Carta2;


    printf("*** SUPERTRUNFO - CADASTRO DE CARTAS ***\n\n");
    printf("CADASTRO DE CARTA 1");

    // Solicita e lê os dados do usuário
    // --- CADASTRO E LEITURA DA CARTA 1 ---
    printf("CADASTRO DE CARTA 1\n");
    printf("Digite o nome da cidade: \n");
    // Isso é uma medida de segurança para evitar buffer overflow.
    scanf(" %s", Nome_da_Cidade_Carta1);
    scanf(" %39[^\n]", Nome_da_Cidade_Carta1);

    printf("Digite a população: \n");
    scanf(" %u", &Populacao_Carta1);
    scanf("%lu", &Populacao_Carta1);

    printf("Digite a área em km²: \n");
    scanf(" %f", &Area_km2_Carta1);
    scanf("%f", &Area_km2_Carta1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos_turisticos_Carta1);

    printf("Digite o PIB (em Reais, apenas números): \n");
    scanf(" %f", &PIB_Carta1);
   
    printf("CADASTRO DE CARTA 2\n");
    scanf("%f", &PIB_Carta1);

    // --- CÁLCULOS DA CARTA 1 (AGORA NO LUGAR CERTO) ---
    PIB_per_capita_Carta1 = PIB_Carta1 / (float)Populacao_Carta1;
    Densidade_Populacional_Carta1 = (float)Populacao_Carta1 / Area_km2_Carta1;
    Inverso_Densidade_Populacional_Carta1 = Area_km2_Carta1 / (float)Populacao_Carta1;
    SuperPoder_Carta1 = (float)Populacao_Carta1 + Area_km2_Carta1 + PIB_Carta1 + (float)Pontos_turisticos_Carta1 + PIB_per_capita_Carta1 + Inverso_Densidade_Populacional_Carta1;


    // --- CADASTRO E LEITURA DA CARTA 2 ---
    printf("\nCADASTRO DE CARTA 2\n");
    printf("Digite o nome da cidade: \n");
    // Isso é uma medida de segurança para evitar buffer overflow.
    scanf(" %s", Nome_da_Cidade_Carta2);
    scanf(" %39[^\n]", Nome_da_Cidade_Carta2);

    printf("Digite a população: \n");
    scanf(" %u", &Populacao_Carta2);
    scanf("%lu", &Populacao_Carta2);

    printf("Digite a área em km²: \n");
    scanf(" %f", &Area_km2_Carta2);
    scanf("%f", &Area_km2_Carta2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos_turisticos_Carta2);

    printf("Digite o PIB (em Reais, apenas números): \n");
    scanf(" %f", &PIB_Carta2);
    scanf("%f", &PIB_Carta2);

    // --- CÁLCULOS DA CARTA 2 (AGORA NO LUGAR CERTO) ---
    PIB_per_capita_Carta2 = PIB_Carta2 / (float)Populacao_Carta2;
    Densidade_Populacional_Carta2 = (float)Populacao_Carta2 / Area_km2_Carta2;
    Inverso_Densidade_Populacional_Carta2 = Area_km2_Carta2 / (float)Populacao_Carta2;
    SuperPoder_Carta2 = (float)Populacao_Carta2 + Area_km2_Carta2 + PIB_Carta2 + (float)Pontos_turisticos_Carta2 + PIB_per_capita_Carta2 + Inverso_Densidade_Populacional_Carta2;


    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n--- CARTA 1 CADASTRADA ---\n");
    printf("Cidade: %s\n", Nome_da_Cidade_Carta1);
    printf("População: %u\n", Populacao_Carta1);
    printf("População: %lu\n", Populacao_Carta1);
    printf("Área: %.2f km²\n", Area_km2_Carta1);
    printf("Pontos Turísticos: %d\n", Pontos_turisticos_Carta1);
    printf("PIB: R$ %.2f\n", PIB_Carta1);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita_Carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_Carta1);
    printf("Inverso da Densidade: %.4f km²/hab\n", Inverso_Densidade_Populacional_Carta1);
    printf("SUPER PODER: %.2f\n", SuperPoder_Carta1);
    printf("--------------------------\n");


    printf("\n--- CARTA 2 CADASTRADA ---\n");
    printf("Cidade: %s\n", Nome_da_Cidade_Carta2);
    printf("População: %u\n", Populacao_Carta2);
    printf("População: %lu\n", Populacao_Carta2);
    printf("Área: %.2f km²\n", Area_km2_Carta2);
    printf("Pontos Turísticos: %d\n", Pontos_turisticos_Carta2);
    printf("PIB: R$ %.2f\n", PIB_Carta2);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita_Carta2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_Carta2);
    printf("Inverso da Densidade: %.4f km²/hab\n", Inverso_Densidade_Populacional_Carta2);
    printf("SUPER PODER: %.2f\n", SuperPoder_Carta2);
    printf("--------------------------\n");

    // --- COMPARAÇÃO DOS SUPERPODERES ---
    printf("*** COMPARAÇÃO DOS PODERES ***\n\n");
    if (SuperPoder_Carta1 > SuperPoder_Carta2) {
        printf("A carta vencedora é de %s!\n", Nome_da_Cidade_Carta1);
    } else if (SuperPoder_Carta1 < SuperPoder_Carta2) {
        printf("A carta vencedora é de %s!\n", Nome_da_Cidade_Carta2);
    } else {
        printf("Houve um empate entre %s e %s!\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
    }

    // --- COMPARAÇÕES DETALHADAS ---
    printf("\n--- COMPARAÇÕES DETALHADAS ---\n");
    printf("A maior população é da carta 1 (%s)?: %s\n", Nome_da_Cidade_Carta1, (Populacao_Carta1 > Populacao_Carta2) ? "Sim" : "Não");
    printf("A maior área é da carta 1 (%s)?: %s\n", Nome_da_Cidade_Carta1, (Area_km2_Carta1 > Area_km2_Carta2) ? "Sim" : "Não");
    printf("A maior qtde. de pontos turísticos é da carta 1 (%s)?: %s\n", Nome_da_Cidade_Carta1, (Pontos_turisticos_Carta1 > Pontos_turisticos_Carta2) ? "Sim" : "Não");
    printf("O maior PIB é da carta 1 (%s)?: %s\n", Nome_da_Cidade_Carta1, (PIB_Carta1 > PIB_Carta2) ? "Sim" : "Não");
    printf("O maior PIB per capita é da carta 1 (%s)?: %s\n", Nome_da_Cidade_Carta1, (PIB_per_capita_Carta1 > PIB_per_capita_Carta2) ? "Sim" : "Não");
    printf("A maior densidade populacional é da carta 1 (%s)?: %s\n", Nome_da_Cidade_Carta1, (Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2) ? "Sim" : "Não");

    printf("--------------------------\n");
    printf("*** FIM DO PROGRAMA ***\n");


    return 0;