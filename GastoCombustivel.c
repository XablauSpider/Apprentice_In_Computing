#include <stdio.h>

int main(){
    double Tv, Vm, dist, Ln;
    scanf("%lf%lf", &Tv, &Vm);
    dist= Vm*Tv;
    Ln= dist/12.0;
    printf("%.3lf\n", Ln);
    return 0;
}