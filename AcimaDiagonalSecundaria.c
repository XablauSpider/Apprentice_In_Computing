#include <stdio.h>
#define TAM 12

int main(){
    int i, j, k=12;
    char resp;
    float soma=0, media, matriz[TAM][TAM];
    scanf(" %c", &resp);
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<TAM-1; i++){
        k--;
        for(j=0; j<k; j++){
            soma=soma+matriz[i][j];
        }
    }
    media=soma/66.0;
    if(resp=='S'){
        printf("%.1f\n", soma);
    }else if(resp=='M'){
        printf("%.1f\n", media);
    }
    return 0;
}