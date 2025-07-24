#include <stdio.h>

int main(){
    int i, quant=0;
    float n;
    for(i=1;i<=6;i++){
        scanf("%f", &n);
        if(n>0){
            quant++;
        }
    }
    printf("%i valores positivos\n", quant);
    return 0;
}