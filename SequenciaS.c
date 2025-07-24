#include <stdio.h>

int main() {
    double S=0.0, i;
    for (i=1; i<101; i++){
        S+=1.0/i;
    }
    printf("%.2f", S);
    return 0;
}