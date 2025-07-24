#include <stdio.h>
#define TAM 12

int main(){
    int num, i, j;
    float matriz[TAM][TAM], soma=0, media;
    char resp;
    scanf("%d", &num);
    scanf(" %c", &resp);
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
        for(i=0; i<TAM; i++){
            soma=soma+matriz[i][num];
        }
    media=soma/12.0;
    if(resp=='S'){
        printf("%.1f\n", soma);
    }else if(resp=='M'){
        printf("%.1f\n", media);
    }
    return 0;
}