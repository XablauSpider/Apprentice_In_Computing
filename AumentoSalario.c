#include <stdio.h>
#include <stdlib.h>

int main(){
    float s, ns, r, pe;
    scanf("%f", &s);
    if (s>0 && s<=400.00){
        ns = s+(s*(15.0/100));
        r = s*(15.0/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15%%\n", ns, r);
    }
    if (s>=400.01 && s<=800.00){
        ns = s+(s*(12.0/100));
        r = s*(12.0/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12%%\n", ns, r);
    }
    if (s>=800.01 && s<=1200.00){
        ns = s+(s*(10.0/100));
        r = s*(10.0/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10%%\n", ns, r);
    }
    if (s>=1200.01 && s<=2000.00){
        ns = s+(s*(7.0/100));
        r = s*(7.0/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7%%\n", ns, r);
    }
    if (s>2000.00){
        ns = s+(s*(4.0/100));
        r = s*(4.0/100);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4%%\n", ns, r);
    }
    return 0;
}