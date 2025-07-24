#include <stdio.h>

int main() {
    int X, Y, soma = 0;
    scanf("%d %d", &X, &Y);
    if (X > Y) {
        X= X+Y;
        Y= X-Y;
        X= X-Y;
    }
    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}