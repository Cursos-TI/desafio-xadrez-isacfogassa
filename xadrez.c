#include <stdio.h>

int main() {
   
    //Primeiro vamos definir as contastantes das direcoes
    #define CIMA "cima"
    #define BAIXO "baixo"
    #define ESQUERDA "esquerda"
    #define DIREITA "direita"

    //Agora vamos definir  as contasntes das casas
    #define CASAS_BISPO 5
    #define CASAS_TORRE 5
    #define CASAS_RAINHA 8

    int i;


    //Bispo movimenta 5 casas sendo diagonal superior direita
    //Diagonal superior direita = cima + direita

    //Torre movimenta 5 casas pra direita

    //Rainha movimenta 8 casas para a esquerda
    printf("movimentacao do Bispo(%d casas na diagonal superior direita):\n", CASAS_BISPO);
    for (i = 0; i < CASAS_BISPO; i++) {
            printf("%s + %s\n", CIMA, DIREITA);
    }

    printf("\nMovimentacao da Torre (%d casas para a direita):\n", CASAS_TORRE);
    i = 0;
    while (i < CASAS_TORRE) {
            printf("%s\n", DIREITA);
            i++;
    }
    
    printf("\nMovimentacao da Rainha (%d casas para a esquerda):\n", CASAS_RAINHA);
    i = 0;
    do { 
        printf ("%s\n", ESQUERDA);
        i++;
    } while (i < CASAS_RAINHA);
   
    return 0;
}
