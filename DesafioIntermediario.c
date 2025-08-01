#include <stdio.h>

int main() {
    int i = 0;
    int x = 0;
    int z = 0;
    int j = 0;

    for(i = 1; i <= 5; i++) {
        printf("Movimento %d: Torre para Direita\n", i);
    }

    do {
        printf("Movimento %d: Bispo para Cima, Esquerda\n", x + 1);
        x++;
    } while(x < 5);

    while(z < 8) {
        printf("Movimento %d: Rainha para Esquerda\n", z + 1);
        z++;
    }

    for(j = 1; j <= 2; j++) {
        printf("Movimento %d: Cavalo para Cima\n", j);
    }

    printf("Movimento Final: Cavalo para Esquerda\n");

    return 0;
}