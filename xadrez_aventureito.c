#include <stdio.h>

int main() {
    printf("=== Movimento do CAVALO ===\n");

    int i, j;

    // O cavalo anda duas casas para baixo
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");

        // Depois do segundo movimento para baixo,
        // ele faz uma casa para a esquerda
        j = 1;
        while (j <= 1) {
            if (i == 2) {
                printf("Esquerda\n");
            }
            j++;
        }
    }

    return 0;
}
