#include <stdio.h>
#include <stdlib.h>

int main(){
    int numj, i;
    float pontos[3], result[3], quantp[3], quantr[3], porcen[3];
    char nome[10];
    quantp[0]=0; quantr[0]=0;
    quantp[1]=0; quantr[1]=0;
    quantp[2]=0; quantr[2]=0;
    do{
    scanf("%d", &numj);
    }while(numj<1 || numj>100);
    for(i=0; i<numj; i++){
        scanf("%s", &nome);
        do{
            scanf("%f%f%f", &pontos[0], &pontos[1], &pontos[2]);
        }while(pontos[0]<0 || pontos[0]>10000 || pontos[1]<0 || pontos[1]>10000 || pontos[2]<0 || pontos[2]>10000);
        do{
            scanf("%f%f%f", &result[0], &result[1], &result[2]);
        }while(result[0]<0 || result[0]>pontos[0] || result[1]<0 || result[1]>pontos[1] || result[2]<0 || result[2]>pontos[2]);
        quantp[0]=quantp[0]+pontos[0]; quantr[0]=quantr[0]+result[0];
        quantp[1]=quantp[1]+pontos[1]; quantr[1]=quantr[1]+result[1];
        quantp[2]=quantp[2]+pontos[2]; quantr[2]=quantr[2]+result[2];
        
    }
    porcen[0]=(quantr[0]/quantp[0])*100;
    porcen[1]=(quantr[1]/quantp[1])*100;
    porcen[2]=(quantr[2]/quantp[2])*100;
    printf("Pontos de Saque: %.2f %%\n", porcen[0]);
    printf("Pontos de Bloqueio: %.2f %%\n", porcen[1]);
    printf("Pontos de Ataque: %.2f %%\n", porcen[2]);
    return 0;
}