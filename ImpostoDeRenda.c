#include <stdio.h>

int main(){
    float aux, sal, aux1, aux2;
    scanf("%f", &sal);
    aux=sal-2000;
    if(sal>+0.00 && sal<=2000.00){
        printf("Isento\n");
    }else if(sal>=2000.01 && sal<=3000.00){
        printf("R$ %.2f\n", aux*8/100.0);
    }else if(sal>=3000.01 && sal<=4500.00){
        printf("R$ %.2f\n", (1000*8/100.0) + (aux-1000)*18/100.0);
    }else if(sal>4500.00){
        printf("R$ %.2f\n", (1000*8/100.00) + (1500*18/100.0) + (aux-2500)*28/100.00);
    }
    return 0;
}