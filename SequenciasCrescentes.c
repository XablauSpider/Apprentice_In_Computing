#include <stdio.h>

int main() {
    int X;
    while (1) {
        scanf("%d", &X);
        if (X == 0) {
            break;
        }
        for (int i = 1; i <= X; i++) {
            if (i == X) {
                printf("%d\n", i);  // Último número, sem espaço
            } else {
                printf("%d ", i);
            }
        }
    }
    return 0;
}