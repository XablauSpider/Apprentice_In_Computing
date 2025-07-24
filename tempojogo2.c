#include <stdio.h>

int main() {
    int Hi, Mi, Hf, Mf, Dh, Dm, Dt, Im, Fm;
    scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);
    Im = Hi * 60 + Mi;
    Fm = Hf * 60 + Mf;
    if (Fm <= Im) {
        Fm += 24 * 60;
    }
    Dt = Fm - Im;
    Dh = Dt / 60;
    Dm = Dt % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Dh, Dm);
    return 0;
}