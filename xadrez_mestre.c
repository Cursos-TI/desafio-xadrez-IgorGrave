#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("Torre %s\n", direcao);
    moverTorre(casas - 1, direcao);
}

// Função recursiva para movimentar o Bispo
void moverBispoRecursivo(int casas, char *direcao1, char *direcao2) {
    if (casas == 0) return;
    printf("Bispo %s, %s\n", direcao1, direcao2);
    moverBispoRecursivo(casas - 1, direcao1, direcao2);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("Rainha %s\n", direcao);
    moverRainha(casas - 1, direcao);
}

// Função com loops aninhados para movimentar o Cavalo em "L"
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) { // Simula duas casas para cima e uma para a direita
            printf("Cavalo cima, cima, direita\n");
        }
    }
}

int main() {
    // Definições de exemplo
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 3;
    int movimentosCavalo = 1;

    // Movimentos da Torre
    printf("Movimentos da Torre:\n");
    moverTorre(casasTorre, "cima");
    printf("\n");

    // Movimentos do Bispo com recursão
    printf("Movimentos do Bispo:\n");
    moverBispoRecursivo(casasBispo, "cima", "direita");
    printf("\n");

    // Movimentos da Rainha
    printf("Movimentos da Rainha:\n");
    moverRainha(casasRainha, "direita");
    printf("\n");

    // Movimentos do Cavalo
    printf("Movimentos do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}


