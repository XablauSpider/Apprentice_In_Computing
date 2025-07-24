#include <stdio.h>

int main(){
    double raio, pi=3.14159, a;
    scanf("%lf", &raio);
    a=pi*raio*raio;
    printf("A=%.4lf\n", a);
    return 0;
}