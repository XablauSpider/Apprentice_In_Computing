#include <stdio.h>

int main(){
    char nome[50];
    double Sf, T, t, Vm;
    scanf(" %s%lf%lf", nome, &Sf, &Vm);
    T=Vm*(15.0/100);
    t=T+Sf;
    printf("TOTAL = R$ %.2lf", t);
    return 0;
}