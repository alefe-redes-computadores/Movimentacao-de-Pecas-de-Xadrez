#include <stdio.h>

// Funções recursivas para cada peça
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima e Direita\n");
    moverBispo(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Movimentos recursivos da Torre, Bispo e Rainha
    printf("=== Movimento da TORRE (recursivo) ===\n");
    moverTorre(5);

    printf("\n=== Movimento do BISPO (recursivo + loops) ===\n");
    for (int v = 1; v <= 3; v++) {
        for (int h = 1; h <= 3; h++) {
            printf("Cima e Direita\n");
        }
    }

    printf("\n=== Movimento da RAINHA (recursivo) ===\n");
    moverRainha(8);

    // Movimento do Cavalo usando loops mais complexos
    printf("\n=== Movimento do CAVALO (loops complexos) ===\n");
    for (int i = 1, j = 1; i <= 2; i++, j++) {
        if (i <= 2) {
            printf("Cima\n");
        }
        if (i == 2) {
            printf("Direita\n");
            break; // termina o "L"
        }
    }

    return 0;
}
