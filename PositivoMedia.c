#include <stdio.h>

int main(){
    float a,i,quant=0, media,soma=0;
    for(i=1;i<=6; i++){
        scanf("%f", &a);
        if(a>0){
            quant++;
            soma=soma+a;
            media=soma/quant;
        }
    }
    printf("%.0f valores positivos\n%.1f", quant, media);
    return 0;
}