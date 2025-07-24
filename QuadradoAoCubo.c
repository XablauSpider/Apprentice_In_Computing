#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int q = i * i;
        int c = i * i * i;
        printf("%d %d %d\n", i, q, c);
    }
    return 0;
}