#include <stdio.h>
#include <stdlib.h>
int main(){
    int Nf, Ht;
    float Vht, Sl;
    scanf("%d%d%f", &Nf, &Ht, &Vht);
    Sl= Ht*Vht;
    printf("NUMBER = %d\nSALARY = U$ %.2f", Nf, Sl);
    return 0;
}