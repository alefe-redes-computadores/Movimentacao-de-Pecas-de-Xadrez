#include <stdio.h>

int main() {
    // Movimento da Torre (usa for)
    printf("=== Movimento da TORRE ===\n");
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (usa while)
    printf("\n=== Movimento do BISPO ===\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima e Direita\n");
        j++;
    }

    // Movimento da Rainha (usa do-while)
    printf("\n=== Movimento da RAINHA ===\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
