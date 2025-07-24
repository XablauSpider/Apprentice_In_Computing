#include <stdio.h>
#include <stdlib.h>

int main(){
    int quant, i, j, k, espac, a, b, c;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &quant);
    for(i=1;i<=quant;i++){
        espac=quant-i;
        for(j=1;j<=espac;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%% ");
        }
        printf("\n");
    }
    return 0;
}