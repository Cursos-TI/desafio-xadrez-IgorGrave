#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.int movimentacao;
    int bispo = 0;
    int rainha = 1;
    int torre;
    int cavaloleft;
    int cavalolow;

    //movimento da torre

    printf("movendo torre...\n");
    for(torre = 0; torre < 5; torre++){
        printf("direita\n");
    }

    printf("\n \nmovendo bispo...\n");
    while ( bispo < 5 )
    {
        printf("cima, ");
        printf("direita\n");
        bispo++;
    }

    printf("\n \nmovendo Rainha...\n");
    do {
        printf("esquerda\n");
        rainha++;
    } while (rainha <= 5);

    printf("\n \nmovendo Cavalo...\n");
    for(cavalolow = 0; cavalolow < 1; cavalolow++){
        printf("Baixo\nBaixo\n");
        while (cavaloleft < 1)
        {
            printf("Esquerda\n");
            cavaloleft++;
        }
    }




    


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    return 0;
}