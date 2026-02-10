#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
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


    printf("*** SUPER TRUNFO - CIDADES ***\n\n");

    // --- CADASTRO E LEITURA DA CARTA 1 ---
    printf("--- CADASTRO DA PRIMEIRA CIDADE ---\n");
    printf("Nome da cidade: ");
    scanf(" %39[^\n]", Nome_da_Cidade_Carta1);

    printf("População: ");
    scanf("%lu", &Populacao_Carta1);

    printf("Área (em km²): ");
    scanf("%f", &Area_km2_Carta1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_turisticos_Carta1);

    printf("PIB (em Reais): ");
    scanf("%f", &PIB_Carta1);

    // --- CÁLCULOS DA CARTA 1 (AGORA NO LUGAR CERTO) ---
    PIB_per_capita_Carta1 = PIB_Carta1 / (float)Populacao_Carta1;
    Densidade_Populacional_Carta1 = (float)Populacao_Carta1 / Area_km2_Carta1;
    Inverso_Densidade_Populacional_Carta1 = Area_km2_Carta1 / (float)Populacao_Carta1;
    SuperPoder_Carta1 = (float)Populacao_Carta1 + Area_km2_Carta1 + PIB_Carta1 + (float)Pontos_turisticos_Carta1 + PIB_per_capita_Carta1 + Inverso_Densidade_Populacional_Carta1;


    // --- CADASTRO E LEITURA DA CARTA 2 ---
    printf("\n--- CADASTRO DA SEGUNDA CIDADE ---\n");
    printf("Nome da cidade: ");
    scanf(" %39[^\n]", Nome_da_Cidade_Carta2);

    printf("População: ");
    scanf("%lu", &Populacao_Carta2);

    printf("Área (em km²): ");
    scanf("%f", &Area_km2_Carta2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_turisticos_Carta2);

    printf("PIB (em Reais): ");
    scanf("%f", &PIB_Carta2);

    // --- CÁLCULOS DA CARTA 2 (AGORA NO LUGAR CERTO) ---
    PIB_per_capita_Carta2 = PIB_Carta2 / (float)Populacao_Carta2;
    Densidade_Populacional_Carta2 = (float)Populacao_Carta2 / Area_km2_Carta2;
    Inverso_Densidade_Populacional_Carta2 = Area_km2_Carta2 / (float)Populacao_Carta2;
    SuperPoder_Carta2 = (float)Populacao_Carta2 + Area_km2_Carta2 + PIB_Carta2 + (float)Pontos_turisticos_Carta2 + PIB_per_capita_Carta2 + Inverso_Densidade_Populacional_Carta2;


    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n--- DADOS DA PRIMEIRA CIDADE ---\n");
    printf("Cidade: %s\n", Nome_da_Cidade_Carta1);
    printf("População: %lu\n", Populacao_Carta1);
    printf("Área: %.2f km²\n", Area_km2_Carta1);
    printf("Pontos Turísticos: %d\n", Pontos_turisticos_Carta1);
    printf("PIB: R$ %.2f\n", PIB_Carta1);
    printf("PIB per capita: R$ %.2f\n", PIB_per_capita_Carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_Carta1);
    printf("Inverso da Densidade: %.4f km²/hab\n", Inverso_Densidade_Populacional_Carta1);
    printf("SUPER PODER: %.2f\n", SuperPoder_Carta1);
    printf("--------------------------\n");


    printf("\n--- DADOS DA SEGUNDA CIDADE ---\n");
    printf("Cidade: %s\n", Nome_da_Cidade_Carta2);
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
    printf("\n*** HORA DO DUELO! ***\n\n");
    printf("Escolha DOIS atributos para a disputa (DIFERENTES):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pontos Turísticos\n");
    printf("4 - PIB\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade Populacional\n");
    printf("7 - SUPER PODER\n");
    
    printf("DIGITE O PRIMEIRO: \n");
    int escolha1;
    scanf(" %d", &escolha1);

    printf("DIGITE O SEGUNDO: \n");
    int escolha2;
    scanf(" %d",&escolha2);
    
    //VARIAVEIS DA PONTUAÇÃO COMPUTADOR / USUÁRIO.
    int pontos_computador = 0;
    int pontos_usuario = 0;


if(escolha1 != escolha2){

    switch(escolha1){
        case 1:
            if (Populacao_Carta1 > Populacao_Carta2) {
                printf("%s tem uma população maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Populacao_Carta2 > Populacao_Carta1) {
                printf("%s tem uma população maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("As populações são iguais.\n");
            }
            break;
        case 2:
            if (Area_km2_Carta1 > Area_km2_Carta2) {
                printf("%s tem uma área maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Area_km2_Carta2 > Area_km2_Carta1) {
                printf("%s tem uma área maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("As áreas são iguais.\n");
            }
            break;
        case 3:
            if (Pontos_turisticos_Carta1 > Pontos_turisticos_Carta2) {
                printf("%s tem mais pontos turísticos do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Pontos_turisticos_Carta2 > Pontos_turisticos_Carta1) {
                printf("%s tem mais pontos turísticos do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("O número de pontos turísticos é igual.\n");
            }
            break;
        case 4:
            if (PIB_Carta1 > PIB_Carta2) {
                printf("%s tem um PIB maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (PIB_Carta2 > PIB_Carta1) {
                printf("%s tem um PIB maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("Os PIBs são iguais.\n");
            }
            break;
        case 5:
            if (PIB_per_capita_Carta1 > PIB_per_capita_Carta2) {
                printf("%s tem um PIB per capita maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (PIB_per_capita_Carta2 > PIB_per_capita_Carta1) {
                printf("%s tem um PIB per capita maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("Os PIBs per capita são iguais.\n");
            }
            break;
        case 6:
            if (Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2) {
                printf("%s tem uma densidade populacional menor do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Densidade_Populacional_Carta2 < Densidade_Populacional_Carta1) {
                printf("%s tem uma densidade populacional menor do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("As densidades populacionais são iguais.\n");
            }
            break;
        case 7:
            if (SuperPoder_Carta1 > SuperPoder_Carta2) {
                printf("%s tem um SUPER PODER maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (SuperPoder_Carta2 > SuperPoder_Carta1) {
                printf("%s tem um SUPER PODER maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("Os SUPER PODERES são iguais.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    switch(escolha2){
        case 1:
            if (Populacao_Carta1 > Populacao_Carta2) {
                printf("%s tem uma população maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Populacao_Carta2 > Populacao_Carta1) {
                printf("%s tem uma população maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("As populações são iguais.\n");
            }
            break;
        case 2:
            if (Area_km2_Carta1 > Area_km2_Carta2) {
                printf("%s tem uma área maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Area_km2_Carta2 > Area_km2_Carta1) {
                printf("%s tem uma área maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("As áreas são iguais.\n");
            }
            break;
        case 3:
            if (Pontos_turisticos_Carta1 > Pontos_turisticos_Carta2) {
                printf("%s tem mais pontos turísticos do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Pontos_turisticos_Carta2 > Pontos_turisticos_Carta1) {
                printf("%s tem mais pontos turísticos do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("O número de pontos turísticos é igual.\n");
            }
            break;
        case 4:
            if (PIB_Carta1 > PIB_Carta2) {
                printf("%s tem um PIB maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (PIB_Carta2 > PIB_Carta1) {
                printf("%s tem um PIB maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("Os PIBs são iguais.\n");
            }
            break;
        case 5:
            if (PIB_per_capita_Carta1 > PIB_per_capita_Carta2) {
                printf("%s tem um PIB per capita maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (PIB_per_capita_Carta2 > PIB_per_capita_Carta1) {
                printf("%s tem um PIB per capita maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("Os PIBs per capita são iguais.\n");
            }
            break;
        case 6:
            if (Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2) {
                printf("%s tem uma densidade populacional menor do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (Densidade_Populacional_Carta2 < Densidade_Populacional_Carta1) {
                printf("%s tem uma densidade populacional menor do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("As densidades populacionais são iguais.\n");
            }
            break;
        case 7:
            if (SuperPoder_Carta1 > SuperPoder_Carta2) {
                printf("%s tem um SUPER PODER maior do que %s.\n", Nome_da_Cidade_Carta1, Nome_da_Cidade_Carta2);
                pontos_usuario++;
            } else if (SuperPoder_Carta2 > SuperPoder_Carta1) {
                printf("%s tem um SUPER PODER maior do que %s.\n", Nome_da_Cidade_Carta2, Nome_da_Cidade_Carta1);
                pontos_computador++;
            } else {
                printf("Os SUPER PODERES são iguais.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

}else{
    printf("Escolha diferentes atributos!\n");
}



    // --- COMPARAÇÕES DETALHADAS ---
    printf("\n--- PLACAR FINAL ---\n");
    printf("Placar: Usuário %d vs. Computador %d\n", pontos_usuario, pontos_computador);
    if (pontos_usuario > pontos_computador) {
        printf("Você venceu!\n");
    } else if (pontos_computador > pontos_usuario) {
        printf("Você perdeu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("--------------------------\n");
    printf("*** FIM DO PROGRAMA ***\n");


    return 0;
}