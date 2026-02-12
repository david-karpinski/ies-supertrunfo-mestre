#include <stdio.h>

int main() {
    unsigned int choice;
    char pais_1[50], pais_2[50];
    unsigned int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    unsigned int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_demografica_1, densidade_demografica_2;

    printf("##### Bem vindo ao Super Trunfo de Paises! #####\n");

    // Carta 01
    printf("\n==================\nCARTA 01\n==================\n");
    printf("Pais: ");
    scanf(" %49[^\n]", pais_1);
    printf("Populacao: ");
    scanf("%u", &populacao_1);
    printf("Area (km2): ");
    scanf("%f", &area_1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib_1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%u", &pontos_turisticos_1);
    densidade_demografica_1 = populacao_1 / area_1;
    printf("Densidade Demografica: %.2f\n", densidade_demografica_1);

    // Carta 02
    printf("\n==================\nCARTA 02\n==================\n");
    printf("Pais: ");
    scanf(" %49[^\n]", pais_2);
    printf("Populacao: ");
    scanf("%u", &populacao_2);
    printf("Area (km2): ");
    scanf("%f", &area_2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib_2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%u", &pontos_turisticos_2);
    densidade_demografica_2 = populacao_2 / area_2;
    printf("Densidade Demografica: %.2f\n", densidade_demografica_2);

    // Menu
    do {
        printf("\n========== MENU DE COMPARACAO ==========\n");
        printf("1) Comparar Pais por Populacao\n");
        printf("2) Comparar Pais por Area\n");
        printf("3) Comparar Pais por PIB\n");
        printf("4) Comparar Pais por Numero de Pontos Turisticos\n");
        printf("5) Comparar Pais por Densidade Demografica\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%u", &choice) != 1) {
            while(getchar() != '\n');
            printf("\nEntrada invalida! Tente novamente.\n");
            choice = 99;
            continue;
        }

        printf("\n----------------------------------------\n");

        switch(choice) {
            case 0:
                printf("Obrigado por jogar! Volte sempre!\n");
                break;
            case 1:
                printf("Comparacao de Populacao:\n");
                printf("%-20s : %10u\n", pais_1, populacao_1);
                printf("%-20s : %10u\n", pais_2, populacao_2);
                if(populacao_1 > populacao_2)
                    printf(">> %s venceu!\n", pais_1);
                else if(populacao_2 > populacao_1)
                    printf(">> %s venceu!\n", pais_2);
                else
                    printf(">> Empate!\n");
                break;
            case 2:
                printf("Comparacao de Area (km2):\n");
                printf("%-20s : %10.2f\n", pais_1, area_1);
                printf("%-20s : %10.2f\n", pais_2, area_2);
                if(area_1 > area_2)
                    printf(">> %s venceu!\n", pais_1);
                else if(area_2 > area_1)
                    printf(">> %s venceu!\n", pais_2);
                else
                    printf(">> Empate!\n");
                break;
            case 3:
                printf("Comparacao de PIB (bilhoes):\n");
                printf("%-20s : %10.2f\n", pais_1, pib_1);
                printf("%-20s : %10.2f\n", pais_2, pib_2);
                if(pib_1 > pib_2)
                    printf(">> %s venceu!\n", pais_1);
                else if(pib_2 > pib_1)
                    printf(">> %s venceu!\n", pais_2);
                else
                    printf(">> Empate!\n");
                break;
            case 4:
                printf("Comparacao de Pontos Turisticos:\n");
                printf("%-20s : %10u\n", pais_1, pontos_turisticos_1);
                printf("%-20s : %10u\n", pais_2, pontos_turisticos_2);
                if(pontos_turisticos_1 > pontos_turisticos_2)
                    printf(">> %s venceu!\n", pais_1);
                else if(pontos_turisticos_2 > pontos_turisticos_1)
                    printf(">> %s venceu!\n", pais_2);
                else
                    printf(">> Empate!\n");
                break;
            case 5:
                printf("Comparacao de Densidade Demografica:\n");
                printf("%-20s : %10.2f\n", pais_1, densidade_demografica_1);
                printf("%-20s : %10.2f\n", pais_2, densidade_demografica_2);
                if(densidade_demografica_1 < densidade_demografica_2)
                    printf(">> %s venceu!\n", pais_1);
                else if(densidade_demografica_2 < densidade_demografica_1)
                    printf(">> %s venceu!\n", pais_2);
                else
                    printf(">> Empate!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

        printf("----------------------------------------\n");

    } while(choice != 0);

    return 0;
}
