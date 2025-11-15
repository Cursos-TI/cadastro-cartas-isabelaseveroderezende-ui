#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
 
  

 // Variáveis para Cidade A01
    char nome_estado_A01[50];
    char nome_cidade_A01[50];
    long long populacao_A01;
    double area_A01, pib_A01, densidade_A01, pib_per_capita_A01, super_poder_A01;
    int pontos_turisticos_A01;

    // Variáveis para Cidade A02
    char nome_estado_A02[50];
    char nome_cidade_A02[50];
    long long populacao_A02;
    double area_A02, pib_A02, densidade_A02, pib_per_capita_A02, super_poder_A02;
    int pontos_turisticos_A02;

    // Variáveis para Cidade B01
    char nome_estado_B01[50];
    char nome_cidade_B01[50];
    long long populacao_B01;
    double area_B01, pib_B01, densidade_B01, pib_per_capita_B01, super_poder_B01;
    int pontos_turisticos_B01;

    // Variáveis para Cidade B02
    char nome_estado_B02[50];
    char nome_cidade_B02[50];
    long long populacao_B02;
    double area_B02, pib_B02, densidade_B02, pib_per_capita_B02, super_poder_B02;
    int pontos_turisticos_B02;

    printf("\n=== BEM-VINDOS AO CADASTRO DE CARTAS - SUPER TRUNFO BY ISABELA ===\n");

    // Cadastro Cidade A01
    printf("\n== Dados para A01 ==:\n\n");
    printf("Informe o Nome do Estado: \n");
    scanf("%s", nome_estado_A01);
    printf("Informe o Nome da Cidade: \n");
    scanf("%s", nome_cidade_A01);
    printf("Informe a População: \n");
    scanf("%lld", &populacao_A01);
    printf("Informe a Área: \n");
    scanf("%lf", &area_A01);
    printf("Informe o PIB: \n");
    scanf("%lf", &pib_A01);
    printf("Informe os Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_A01);
    if (area_A01 > 0)
        densidade_A01 = (double) populacao_A01 / area_A01;
    else
        densidade_A01 = 0.0;
    if (populacao_A01 > 0)
        pib_per_capita_A01 = pib_A01 / (double) populacao_A01;
    else
        pib_per_capita_A01 = 0.0;
        
    super_poder_A01 = (double) populacao_A01 + area_A01 + pib_A01 + pontos_turisticos_A01 + densidade_A01 + pib_per_capita_A01;
    
    
    
    // Cadastro Cidade A02
    printf("\n== Dados para A02 ==:\n\n");
    printf("Informe o Nome do Estado: \n");
    scanf("%s", nome_estado_A02);
    printf("Informe o Nome da Cidade: \n");
    scanf("%s", nome_cidade_A02);
    printf("Informe a População: \n");
    scanf("%lld", &populacao_A02);
    printf("Informe a Área: \n");
    scanf("%lf", &area_A02);
    printf("Informe o PIB: \n");
    scanf("%lf", &pib_A02);
    printf("Informe os Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_A02);
    if (area_A02 > 0)
        densidade_A02 = (double) populacao_A02 / area_A02;
    else
        densidade_A02 = 0.0;
    if (populacao_A02 > 0)
        pib_per_capita_A02 = pib_A02 / (double) populacao_A02;
    else
        pib_per_capita_A02 = 0.0;
        
    super_poder_A02 = (double) populacao_A02 + area_A02 + pib_A02 + pontos_turisticos_A02 + densidade_A02 + pib_per_capita_A02;
    
    
    
    // Cadastro Cidade B01
    printf("\n== Dados para B01 ==:\n\n");
    printf("Informe o Nome do Estado: \n");
    scanf("%s", nome_estado_B01);
    printf("Informe o Nome da Cidade: \n");
    scanf("%s", nome_cidade_B01);
    printf("Informe a População: \n");
    scanf("%lld", &populacao_B01);
    printf("Informe a Área: \n");
    scanf("%lf", &area_B01);
    printf("Informe o PIB: \n");
    scanf("%lf", &pib_B01);
    printf("Informe os Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_B01);
    if (area_B01 > 0)
        densidade_B01 = (double) populacao_B01 / area_B01;
    else
        densidade_B01 = 0.0;
    if (populacao_B01 > 0)
        pib_per_capita_B01 = pib_B01 / (double) populacao_B01;
    else
        pib_per_capita_B01 = 0.0;
        
    super_poder_B01 = (double) populacao_B01 + area_B01 + pib_B01 + pontos_turisticos_B01 + densidade_B01 + pib_per_capita_B01;
    
    
    // Cadastro Cidade B02
    printf("\n== Dados para B02 ==:\n\n");
    printf("Informe o Nome do Estado: \n");
    scanf("%s", nome_estado_B02);
    printf("Informe o Nome da Cidade: \n");
    scanf("%s", nome_cidade_B02);
    printf("Informe a População: \n");
    scanf("%lld", &populacao_B02);
    printf("Informe a Área: \n");
    scanf("%lf", &area_B02);
    printf("Informe o PIB: \n");
    scanf("%lf", &pib_B02);
    printf("Informe os Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos_B02);
    if (area_B02 > 0)
        densidade_B02 = (double) populacao_B02 / area_B02;
    else
        densidade_B02 = 0.0;
    if (populacao_B02 > 0)
        pib_per_capita_B02 = pib_B02 / (double) populacao_B02;
    else
        pib_per_capita_B02 = 0.0;
        
    super_poder_B02 = (double) populacao_B02 + area_B02 + pib_B02 + pontos_turisticos_B02 + densidade_B02 + pib_per_capita_B02;
    
    
    // Exibição dos dados
    
    printf("\n=== DADOS CADASTRADOS ===\n\n");
    printf("_______________________\n");
    printf("Código: A01\n\n");
    printf("Estado: %s \n", nome_estado_A01);
    printf("Cidade: %s \n", nome_cidade_A01);
    printf("População: %lld \n", populacao_A01);
    printf("Área: %.2f \n", area_A01);
    printf("PIB: %.2f \n", pib_A01);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_A01);
    printf("Densidade Populacional: %.2f \n", densidade_A01);
    printf("PIB Per Capita: %.2f \n", pib_per_capita_A01);
    printf("Super Poder: %.2f \n", super_poder_A01);
    printf("_______________________\n");
    
    
    printf("_______________________\n");
    printf("Código: A02\n\n");
    printf("Estado: %s \n", nome_estado_A02);
    printf("Cidade: %s \n", nome_cidade_A02);
    printf("População: %lld \n", populacao_A02);
    printf("Área: %.2f \n", area_A02);
    printf("PIB: %.2f \n", pib_A02);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_A02);
    printf("Densidade Populacional: %.2f \n", densidade_A02);
    printf("PIB Per Capita: %.2f \n", pib_per_capita_A02);
    printf("Super Poder: %.2f \n", super_poder_A02);
    printf("_______________________\n");
    
    
    printf("_______________________\n");
    printf("Código: B01\n\n");
    printf("Estado: %s \n", nome_estado_B01);
    printf("Cidade: %s \n", nome_cidade_B01);
    printf("População: %lld \n", populacao_B01);
    printf("Área: %.2f \n", area_B01);
    printf("PIB: %.2f \n", pib_B01);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_B01);
    printf("Densidade Populacional: %.2f \n", densidade_B01);
    printf("PIB Per Capita: %.2f \n", pib_per_capita_B01);
    printf("Super Poder: %.2f \n", super_poder_B01);
    printf("_______________________\n");
    
    printf("_______________________\n");
    printf("Código: B02\n\n");
    printf("Estado: %s \n", nome_estado_B02);
    printf("Cidade: %s \n", nome_cidade_B02);
    printf("População: %lld \n", populacao_B02);
    printf("Área: %.2f \n", area_B02);
    printf("PIB: %.2f \n", pib_B02);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_B02);
    printf("Densidade Populacional: %.2f \n", densidade_B02);
    printf("PIB Per Capita: %.2f \n", pib_per_capita_B02);
    printf("Super Poder: %.2f \n", super_poder_B02);
    printf("_______________________\n");
    
    
    
    int aux = 0;
    
    while (aux < 3){
    
        // Comparação de duas cartas
        printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
        char codigo1[4], codigo2[4];
        printf("Digite o código da primeira carta (ex: A01): ");
        scanf("%s", codigo1);
        printf("Digite o código da segunda carta (ex: B02): ");
        scanf("%s", codigo2);
    
        // Variáveis temporárias para as propriedades da carta 1
        long long populacao1;
        double area1, pib1, densidade1, pib_per_capita1, super_poder1;
        int pontos_turisticos1;
    
        // Atribuição para carta A01
        if (codigo1[0] == 'A' && codigo1[1] == '0' && codigo1[2] == '1') {
            populacao1 = populacao_A01; 
            area1 = area_A01; 
            pib1 = pib_A01; 
            densidade1 = densidade_A01;
            pib_per_capita1 = pib_per_capita_A01; 
            super_poder1 = super_poder_A01; 
            pontos_turisticos1 = pontos_turisticos_A01;
            
        } else if (codigo1[0] == 'A' && codigo1[1] == '0' && codigo1[2] == '2') {
            populacao1 = populacao_A02; 
            area1 = area_A02; 
            pib1 = pib_A02; 
            densidade1 = densidade_A02;
            pib_per_capita1 = pib_per_capita_A02; 
            super_poder1 = super_poder_A02; 
            pontos_turisticos1 = pontos_turisticos_A02;
            
        } else if (codigo1[0] == 'B' && codigo1[1] == '0' && codigo1[2] == '1') {
            populacao1 = populacao_B01; 
            area1 = area_B01; 
            pib1 = pib_B01; 
            densidade1 = densidade_B01;
            pib_per_capita1 = pib_per_capita_B01; 
            super_poder1 = super_poder_B01; 
            pontos_turisticos1 = pontos_turisticos_B01;
            
        } else if (codigo1[0] == 'B' && codigo1[1] == '0' && codigo1[2] == '2') {
            populacao1 = populacao_B02; 
            area1 = area_B02; 
            pib1 = pib_B02; 
            densidade1 = densidade_B02;
            pib_per_capita1 = pib_per_capita_B02; 
            super_poder1 = super_poder_B02; 
            pontos_turisticos1 = pontos_turisticos_B02;
            
        } else {
            printf("Erro: Carta %s não encontrada!\n", codigo1);
            return 1;
        }
    
        // Variáveis temporárias para as propriedades da carta 2
        long long populacao2;
        double area2, pib2, densidade2, pib_per_capita2, super_poder2;
        int pontos_turisticos2;
    
        // Atribuição para carta 2 sem strcmp (comparação manual de chars)
        if (codigo2[0] == 'A' && codigo2[1] == '0' && codigo2[2] == '1') {
            populacao2 = populacao_A01; 
            area2 = area_A01; 
            pib2 = pib_A01; 
            densidade2 = densidade_A01;
            pib_per_capita2 = pib_per_capita_A01; 
            super_poder2 = super_poder_A01; 
            pontos_turisticos2 = pontos_turisticos_A01;
            
        } else if (codigo2[0] == 'A' && codigo2[1] == '0' && codigo2[2] == '2') {
            populacao2 = populacao_A02; 
            area2 = area_A02; 
            pib2 = pib_A02; 
            densidade2 = densidade_A02;
            pib_per_capita2 = pib_per_capita_A02; 
            super_poder2 = super_poder_A02; 
            pontos_turisticos2 = pontos_turisticos_A02;
            
        } else if (codigo2[0] == 'B' && codigo2[1] == '0' && codigo2[2] == '1') {
            populacao2 = populacao_B01; 
            area2 = area_B01; 
            pib2 = pib_B01;
            densidade2 = densidade_B01;
            pib_per_capita2 = pib_per_capita_B01; 
            super_poder2 = super_poder_B01; 
            pontos_turisticos2 = pontos_turisticos_B01;
            
        } else if (codigo2[0] == 'B' && codigo2[1] == '0' && codigo2[2] == '2') {
            populacao2 = populacao_B02; 
            area2 = area_B02; 
            pib2 = pib_B02; 
            densidade2 = densidade_B02;
            pib_per_capita2 = pib_per_capita_B02; 
            super_poder2 = super_poder_B02; 
            pontos_turisticos2 = pontos_turisticos_B02;
        } else {
            printf("Erro: Carta %s não encontrada!\n", codigo2);
            return 1;
        }
        
        
        // Comparação entre a carta 1 e carta 2
        
        printf("\n=== Comparação entre as cartas ===\n");
        
        if(populacao1 > populacao2){
            printf("População %s vence!\n", codigo1);
        }else if(populacao1 < populacao2){
            printf("População %s vence!\n", codigo2);
        }else{
            printf("População: Empate!\n");
        }
        
        if(area1 > area2){
            printf("Área %s vence!\n", codigo1);
        }else if(area1 < area2){
            printf("Área %s vence!\n", codigo2);
        }else{
            printf("Área: Empate!\n");
        }
        
    
        if(pib1 > pib2){
            printf("PIB %s vence!\n", codigo1);
        }else if(pib1 < pib2){
            printf("PIB %s vence!\n", codigo2);
        }else{
            printf("PIB: Empate!\n");
        }
        
        
        if(pib_per_capita1 > pib_per_capita2){
            printf("PIB Per Capita %s vence!\n", codigo1);
        }else if(pib_per_capita1 < pib_per_capita2){
            printf("PIB Per Capita %s vence!\n", codigo2);
        }else{
            printf("PIB Per Capita: Empate!\n");
        }
        
        if(pontos_turisticos1 > pontos_turisticos2){
            printf("Pontos Turísticos %s vence!\n", codigo1);
        }else if(pontos_turisticos1 < pontos_turisticos2){
            printf("Pontos Turísticos %s vence!\n", codigo2);
        }else{
            printf("Pontos Turísticos: Empate!\n");
        }
        
        if(densidade1 > densidade2){
            printf("Densidade %s vence!\n", codigo1);
        }else if(densidade1 < densidade2){
            printf("Densidade %s vence!\n", codigo2);
        }else{
            printf("Densidade: Empate!\n");
        }
        
        
        if(super_poder1 > super_poder2){
            printf("Super Poder %s vence!\n", codigo1);
        }else if(super_poder1 < super_poder2){
            printf("Super Poder %s vence!\n", codigo2);
        }else{
            printf("Super Poder: Empate!\n");
        }
        
        aux = aux + 1;
        
    }
    
    
}
