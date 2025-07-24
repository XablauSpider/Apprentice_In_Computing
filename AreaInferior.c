#include <stdio.h>
#define TAM 12

int main(){
    int i, j, k=0;
    char resp;
    float matriz[TAM][TAM], soma=0, media;
    scanf(" %c", &resp);
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=11; i>6; i--){
        k++;
        for(j=k; j<i; j++){
            soma=soma+matriz[i][j];
        }
    }
    media=soma/30.0;
    if(resp=='S'){
        printf("%.1f\n", soma);
    }else if(resp='M'){
        printf("%.1f\n", media);
    }
    return 0;
}